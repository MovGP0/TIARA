/* Ghidra address: 0176a870 */
/* Ghidra symbol: FUN_0176a870 */


void FUN_0176a870(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 != '\0') {
    FUN_00414ad0(param_1 + 0x48);
  }
  lVar2 = FUN_0198d3a0(param_3,1,0);
  if (lVar2 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      uVar3 = (**(code **)*puVar1)(puVar1);
      FUN_00418590(uVar3,&DAT_01984da0);
    }
    *(longlong *)(param_1 + 8) = lVar2;
  }
  return;
}

