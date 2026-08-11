/* Ghidra address: 01533d50 */
/* Ghidra symbol: FUN_01533d50 */


void FUN_01533d50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined1 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_var;
  undefined8 local_20;
  
  *param_7 = 0;
  if (param_3 == *(longlong *)(param_1 + 0x928)) {
    *param_7 = 1;
    local_20 = FUN_00498310(0,param_5);
    local_20 = FUN_0064d1f0(param_2,&local_20);
    FUN_0064d3a0(param_1,&local_20);
    iVar1 = FUN_00b905e0(0x7d,extraout_var);
    iVar2 = FUN_0064d120(param_1);
    uVar3 = FUN_00b905e0(*(undefined4 *)(param_1 + 0x984),
                         (iVar2 - iVar1) - *(int *)(param_1 + 0x980));
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x930),uVar3);
  }
  return;
}

