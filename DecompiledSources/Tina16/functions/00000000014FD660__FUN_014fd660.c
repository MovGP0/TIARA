/* Ghidra address: 014fd660 */
/* Ghidra symbol: FUN_014fd660 */


void FUN_014fd660(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x730) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x730));
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x738));
  }
  if (*PTR_DAT_02003fc8 == '\0') {
    if (*(longlong *)(param_1 + 0x790) != 0) {
      FUN_00410f20(*(longlong *)(param_1 + 0x790));
      uVar2 = FUN_00442620(param_1 + 0x7a8,*(undefined8 *)(param_1 + 0x7a0));
      FUN_015fcd60(*(undefined8 *)(param_1 + 0x798),uVar2,0);
      FUN_015fcbd0(PTR_DAT_02004770,0);
      *(undefined8 *)(param_1 + 0x790) = 0;
      *(undefined8 *)(param_1 + 0x798) = 0;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x728);
    if (lVar1 != 0) {
      uVar2 = (*(code *)**(undefined8 **)(lVar1 + 0x13a60))(lVar1);
      FUN_004095f0(uVar2);
    }
  }
  return;
}

