/* Ghidra address: 00bcbe80 */
/* Ghidra symbol: FUN_00bcbe80 */


undefined8 FUN_00bcbe80(int *param_1,int *param_2)

{
  undefined8 local_10;
  
  if ((param_2[1] < param_1[1]) || ((param_2[1] == param_1[1] && (*param_2 < *param_1)))) {
    local_10 = *(undefined8 *)param_2;
  }
  else {
    local_10 = *(undefined8 *)param_1;
  }
  return local_10;
}

