/* Ghidra address: 014dba30 */
/* Ghidra symbol: FUN_014dba30 */


void FUN_014dba30(longlong *param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  longlong local_38;
  undefined8 *local_30 [2];
  
  cVar1 = FUN_014db910(&DAT_014dbaf8,param_2,&local_38);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,*param_3 + -1,local_30);
    *(undefined1 *)local_30[0] = 1;
    (**(code **)(*param_1 + 0x2d0))(param_1,*param_3,local_30);
    *local_30[0] = *(undefined8 *)(local_38 + 0x28);
  }
  cVar1 = FUN_014db910(&DAT_014dbafe,param_2,&local_38);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x2d0))(param_1,*param_3 + -1,local_30);
    *(undefined1 *)local_30[0] = 0;
    (**(code **)(*param_1 + 0x2d0))(param_1,*param_3,local_30);
    *local_30[0] = *(undefined8 *)(local_38 + 0x28);
  }
  *param_3 = *param_3 + 1;
  return;
}

