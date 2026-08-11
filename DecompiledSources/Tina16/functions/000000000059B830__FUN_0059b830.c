/* Ghidra address: 0059b830 */
/* Ghidra symbol: FUN_0059b830 */


void FUN_0059b830(longlong *param_1,ulonglong param_2,char param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((int)param_1[1] == 0) {
    param_2 = CONCAT71((int7)(param_2 >> 8),1);
    puVar2 = PTR_PTR_02001fc8;
    uVar1 = FUN_0044d710(&PTR_FUN_004347c0,param_2);
    param_3 = (char)puVar2;
    FUN_004134c0(uVar1);
  }
  *param_4 = *(undefined1 *)(*param_1 + (longlong)((int)param_1[1] + -1));
  if (param_3 == '\0') {
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    (*(code *)param_1[4])(param_1[3],param_4,param_2 & 0xffffffff);
  }
  return;
}

