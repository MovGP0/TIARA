/* Ghidra address: 00dd3710 */
/* Ghidra symbol: FUN_00dd3710 */


char * FUN_00dd3710(char *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                   char *param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  pcVar2 = (char *)FUN_00410920(param_1,local_res10);
  if (pcVar2 != (char *)0xffffffffffffffff) {
    *pcVar2 = *param_5;
    *param_5 = *param_5 + '\x03';
    cVar1 = *param_6;
    pcVar2[5] = cVar1;
    *param_6 = *param_6 + '\x01';
    FUN_00dd32d0(pcVar2,cVar1,param_3,param_4,0,1);
    param_1 = pcVar2;
  }
  return param_1;
}

