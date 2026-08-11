/* Ghidra address: 014b6080 */
/* Ghidra symbol: FUN_014b6080 */


void FUN_014b6080(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined1 *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_var;
  undefined8 local_20;
  
  *param_7 = 0;
  if (param_3 == *(longlong *)(param_1 + 0x830)) {
    *param_7 = 1;
    local_20 = FUN_00498310(0,param_5);
    local_20 = FUN_0064d1f0(param_2,&local_20);
    FUN_0064d3a0(param_1,&local_20);
    iVar3 = extraout_var;
    if (extraout_var < 0x7d) {
      iVar3 = 0x7d;
    }
    iVar1 = *(int *)(param_1 + 0x88c);
    iVar2 = FUN_0064d120(param_1);
    iVar3 = (iVar2 - iVar3) - *(int *)(param_1 + 0x888);
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x838),iVar3);
  }
  return;
}

