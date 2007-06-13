#include <Rinternals.h>
#include <R_ext/Rdynload.h>



void averagelog_no_copy(double *data, int rows, int cols, double *results, double *resultsSE){

  static void(*fun)(double*, int, int, double *, double *) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, double *, double *))R_GetCCallable("preprocessCore","averagelog_no_copy");
  
  return fun(data,rows,cols,results,resultsSE);



}



/*! \brief log2 transform and then compute the mean and SE of the mean
 * 
 *  Given a data matrix of probe intensities compute average log2 expression measure and SE of this estimate
 *  on a column by column basis
 *    
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param resultsSE pre-allocated space to store SE of log2 averages. Should be of length cols
 *
 *  
 */

void averagelog(double *data, int rows, int cols, double *results, double *resultsSE){


  static void(*fun)(double*, int, int, double *, double *) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, double *, double *))R_GetCCallable("preprocessCore","averagelog");
  
  return fun(data,rows,cols,results,resultsSE);
}


/*! \brief log2 transform and then compute the mean and SE of the mean
 *
 * Given a data matrix of probe intensities, and a list of rows in the matrix 
 *      corresponding to a single probeset, compute average log2 expression measure. 
 *      Note that data is a probes by chips matrix. Also compute SE estimates
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param cur_rows a vector containing row indices to use
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param nprobes number of probes in current set
 * @param resultsSE pre-allocated space to store SE of log2 averages. Should be of length cols
 *
 *  
 */

void AverageLog(double *data, int rows, int cols, int *cur_rows, double *results, int nprobes, double *resultsSE){

  static void(*fun)(double*, int, int, int*, double *, int, double *) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, int*, double *, int, double *))R_GetCCallable("preprocessCore","AverageLog");
  
  return fun(data,rows,cols,cur_rows,results,nprobes,resultsSE);
}


/*! \brief log2 transform and then compute the mean
 *
 *  Given a data matrix of probe intensities, and a list of rows in the matrix 
 *  corresponding to a single probeset, compute average log2 expression measure. 
 *  Note that data is a probes by chips matrix. 
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param cur_rows a vector containing row indices to use
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param nprobes number of probes in current set
 *
 *  
 */


void AverageLog_noSE(double *data, int rows, int cols, int *cur_rows, double *results, int nprobes){
  

  static void(*fun)(double*, int, int, int*, double *, int) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, int*, double *, int))R_GetCCallable("preprocessCore","AverageLog_noSE");
  
  return fun(data,rows,cols,cur_rows,results,nprobes);
}




/*! \brief compute the mean then log2 transform and also SE of the log2 mean
 * 
 *  Given a data matrix of probe intensities compute average expression measure then log2 it and SE of this estimate
 *  on a column by column basis
 *    
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param resultsSE pre-allocated space to store SE of log2 averages. Should be of length cols
 *
 *  
 */

void logaverage(double *data, int rows, int cols, double *results, double *resultsSE){

  static void(*fun)(double*, int, int, double *, double *) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, double *, double *))R_GetCCallable("preprocessCore","logaverage");
  
  return fun(data,rows,cols,results,resultsSE);
}



/*! \brief compute the average and then log2 transform it.
 *
 * Given a data matrix of probe intensities, and a list of rows in the matrix 
 *      corresponding to a single probeset, compute log2 average expression measure. 
 *      Note that data is a probes by chips matrix. Also compute SE estimates
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param cur_rows a vector containing row indices to use
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param nprobes number of probes in current set
 * @param resultsSE pre-allocated space to store SE of log2 averages. Should be of length cols
 *
 *  
 */

void LogAverage(double *data, int rows, int cols, int *cur_rows, double *results, int nprobes, double *resultsSE){


  static void(*fun)(double*, int, int, int*, double *, int, double *) = NULL;
  
  if (fun == NULL)
    fun =  (void(*)(double*, int, int, int*, double *, int, double *))R_GetCCallable("preprocessCore","LogAverage");
  
  return fun(data,rows,cols,cur_rows,results,nprobes,resultsSE);
}



void tukeybiweight(double *data, int rows, int cols, double *results, double *resultsSE){

  static void(*fun)(double *, int, int, double *, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *))R_GetCCallable("preprocessCore","tukeybiweight");
  
  return fun(data, rows, cols, results, resultsSE);



}


void TukeyBiweight(double *data, int rows, int cols, int *cur_rows, double *results, int nprobes, double *resultsSE){


  static void(*fun)(double *, int, int, int *, double *, int, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, int *, double *, int, double *))R_GetCCallable("preprocessCore","TukeyBiweight");
  
  return fun(data, rows, cols, cur_rows,results, nprobes, resultsSE);


}



double Tukey_Biweight(double *x, int length){

  static double(*fun)(double *, int) = NULL;

  if (fun == NULL)
    fun = (double (*)(double *, int))R_GetCCallable("preprocessCore","Tukey_Biweight");

  return fun(x,length);

}


void lm_wfit(double *x, double *y, double *w, int rows, int cols, double tol, double *out_beta, double *out_resids){

  static void(*fun)(double *, double *, double *, int, int, double, double *, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, double *, double *, int, int, double, double *, double *))R_GetCCallable("preprocessCore","lm_wfit");


  return fun(x,y,w,rows,cols,tol,out_beta,out_resids);

}





void median_polish_fit_no_copy(double *data, int rows, int cols, double *r, double *c, double *t){


  static void(*fun)(double *, int, int, double *, double *, double*) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *, double*))R_GetCCallable("preprocessCore","median_polish_fit_no_copy");


  return fun(data, rows, cols, r, c, t);

}

void median_polish_no_copy(double *data, int rows, int cols, double *results, double *resultsSE){

  static void(*fun)(double *, int, int, double *, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *))R_GetCCallable("preprocessCore","median_polish_no_copy");

  return fun(data,rows,cols,results,resultsSE);

}

void median_polish_log2_no_copy(double *data, int rows, int cols, double *results, double *resultsSE){
  
  static void(*fun)(double *, int, int, double *, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *))R_GetCCallable("preprocessCore","median_polish_log2_no_copy");

  return fun(data,rows,cols,results,resultsSE);

}


void median_polish_log2(double *data, int rows, int cols, double *results, double *resultsSE, double *residuals){

  static void(*fun)(double *, int, int, double *, double *, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *, double *))R_GetCCallable("preprocessCore","median_polish_log2");
  

  return fun(data,rows,cols,results,resultsSE,residuals);

}

void median_polish(double *data, int rows, int cols, double *results, double *resultsSE, double *residuals){

  static void(*fun)(double *, int, int, double *, double *, double *) = NULL;
  
  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *, double *))R_GetCCallable("preprocessCore","median_polish");
  

  return fun(data,rows,cols,results,resultsSE,residuals);
}


/*! \brief Compute medianpolish  
 *
 *
 *      Given a data matrix of probe intensities, and a list of rows in the matrix 
 *      corresponding to a single probeset, compute median polish expression measure. 
 *      Note that data is a probes by chips matrix. Also compute SE estimates
 *
 * @param data a matrix containing data stored column-wise stored in rows*cols length of memory
 * @param rows the number of rows in the matrix 
 * @param cols the number of columns in the matrix
 * @param cur_rows a vector containing row indices to use
 * @param results pre-allocated space to store output log2 averages. Should be of length cols
 * @param nprobes number of probes in current set
 * @param resultsSE pre-allocated space to store SE of log2 averages. Should be of length cols. Note that this is just NA values
 *
 *  
 */

void MedianPolish(double *data, int rows, int cols, int *cur_rows, double *results, int nprobes, double *resultsSE){


  static void(*fun)(double *, int, int, int *, double *, int, double *) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, int, int, int *, double *, int, double *))R_GetCCallable("preprocessCore","MedianPolish");


  return fun(data,rows,cols,cur_rows,results,nprobes,resultsSE);

}





void rlm_fit(double *x, double *y, int rows, int cols, double *out_beta, double *out_resids, double *out_weights, double (* PsiFn)(double, double, int), double psi_k, int max_iter,int initialized){

  static void(*fun)(double *, double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *, double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int))R_GetCCallable("preprocessCore","rlm_fit");


  return fun(x, y, rows, cols, out_beta, out_resids,out_weights, PsiFn, psi_k, max_iter, initialized);


}



void rlm_wfit(double *x, double *y, double *w, int rows, int cols, double *out_beta, double *out_resids, double *out_weights, double (* PsiFn)(double, double, int), double psi_k, int max_iter,int initialized){

  static void(*fun)(double *, double *, double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int) = NULL;


  if (fun == NULL)
    fun = (void(*)(double *, double *, double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int))R_GetCCallable("preprocessCore","rlm_wfit");


  return fun(x, y, w, rows, cols, out_beta, out_resids,out_weights, PsiFn, psi_k, max_iter, initialized);




}



double med_abs(double *x, int length){
  static double(*fun)(double *, int) = NULL;


  if (fun == NULL)
    fun = (double(*)(double *, int))R_GetCCallable("preprocessCore","med_abs");


  return fun(x, length);




}



void rlm_fit_anova(double *y, int y_rows, int y_cols,double *out_beta, double *out_resids, double *out_weights,double (* PsiFn)(double, double, int), double psi_k,int max_iter, int initialized){


  static void(*fun)(double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int) = NULL;


  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *, double *, double (*)(double, double, int), double, int, int))R_GetCCallable("preprocessCore","rlm_fit_anova");


  return fun(y, y_rows, y_cols, out_beta, out_resids,out_weights, PsiFn, psi_k, max_iter, initialized);

}


void rlm_wfit_anova(double *y, int y_rows, int y_cols, double *w, double *out_beta, double *out_resids, double *out_weights,double (* PsiFn)(double, double, int), double psi_k,int max_iter, int initialized){
  
  static void(*fun)(double *, int, int, double *, double *, double *, double *, double (*)(double, double, int), double, int, int) = NULL;


  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *, double *, double *, double (*)(double, double, int), double, int, int))R_GetCCallable("preprocessCore","rlm_wfit_anova");


  return fun(y, y_rows, y_cols, w, out_beta, out_resids,out_weights, PsiFn, psi_k, max_iter, initialized);


}


void rlm_compute_se(double *X,double *Y, int n, int p, double *beta, double *resids,double *weights,double *se_estimates,double *varcov, double *residSE, int method,double (* PsiFn)(double, double, int), double psi_k){
  
  static void(*fun)(double *,double *, int, int, double *, double *, double *, double *, double *, double *, int, double (*)(double, double, int), double) = NULL;

  if (fun == NULL)
    fun = (void(*)(double *,double *, int, int, double *, double *, double *, double *, double *, double *, int, double (*)(double, double, int), double))R_GetCCallable("preprocessCore","rlm_compute_se");

  return fun(X, Y, n, p, beta, resids, weights, se_estimates, varcov, residSE, method, PsiFn, psi_k);

}


void rlm_compute_se_anova(double *Y, int y_rows,int y_cols, double *beta, double *resids,double *weights,double *se_estimates, double *varcov, double *residSE, int method,double (* PsiFn)(double, double, int), double psi_k){

  static void(*fun)(double *, int, int, double *, double *,double *,double *, double *, double *, int, double (*)(double, double, int), double) = NULL;
  
  if (fun == NULL)
    fun = (void(*)(double *, int, int, double *, double *,double *,double *, double *, double *, int, double (*)(double, double, int), double))R_GetCCallable("preprocessCore","rlm_compute_se_anova");

  
  return fun(Y, y_rows, y_cols, beta, resids, weights, se_estimates, varcov, residSE, method, PsiFn, psi_k);

}







