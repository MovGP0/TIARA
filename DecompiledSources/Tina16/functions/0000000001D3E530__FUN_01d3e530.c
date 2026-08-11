/* Ghidra address: 01d3e530 */
/* Ghidra symbol: FUN_01d3e530 */


void FUN_01d3e530(longlong *param_1,ulonglong param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong unaff_R14;
  longlong local_48;
  undefined2 local_3a [5];
  
  FUN_01d3d920(param_1,0xe,0,local_3a);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_3a[0],&local_48);
  if (cVar1 == '\x0e') {
    unaff_R14 = *(longlong *)(local_48 + 8);
    if (param_3 != 1) {
      unaff_R14 = *(longlong *)(local_48 + 0x10);
    }
  }
  if ((int)param_2 < *(int *)(unaff_R14 + 0x10)) {
    puVar2 = (undefined4 *)
             FUN_01d3c000(unaff_R14,
                          CONCAT62((int6)((param_2 & 0xffffffff) >> 0x10),
                                   (short)(param_2 & 0xffffffff) + -1));
    *puVar2 = param_4;
  }
  return;
}

