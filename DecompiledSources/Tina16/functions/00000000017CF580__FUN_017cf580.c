/* Ghidra address: 017cf580 */
/* Ghidra symbol: FUN_017cf580 */


void FUN_017cf580(longlong param_1,double param_2,double param_3)

{
  char cVar1;
  double local_res10;
  double local_res18 [2];
  
  if ((param_2 != *(double *)(param_1 + 200)) || (param_3 != *(double *)(param_1 + 0xc0))) {
    local_res10 = param_2;
    local_res18[0] = param_3;
    cVar1 = FUN_017cf3c0(param_1,param_1 + 200,param_1 + 0xc0,&local_res10,local_res18);
    if (cVar1 != '\0') {
      FUN_017cf490(param_1,*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xc0),
                   local_res10,local_res18[0]);
    }
    *(double *)(param_1 + 200) = local_res10;
    *(double *)(param_1 + 0xc0) = local_res18[0];
  }
  return;
}

