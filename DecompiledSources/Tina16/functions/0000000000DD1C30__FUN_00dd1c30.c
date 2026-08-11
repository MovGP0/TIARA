/* Ghidra address: 00dd1c30 */
/* Ghidra symbol: FUN_00dd1c30 */


char * FUN_00dd1c30(char *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                   char *param_5,char *param_6)

{
  char *pcVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pcVar1 = (char *)FUN_00410920(param_1,local_res10);
  if (pcVar1 != (char *)0xffffffffffffffff) {
    FUN_00dd1bc0(pcVar1,0,param_3,param_3,param_4,0,1);
    *pcVar1 = *param_5;
    *param_5 = *param_5 + '\x01';
    pcVar1[5] = *param_6;
    *param_6 = *param_6;
    param_1 = pcVar1;
  }
  return param_1;
}

