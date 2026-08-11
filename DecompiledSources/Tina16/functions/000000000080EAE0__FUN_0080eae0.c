/* Ghidra address: 0080eae0 */
/* Ghidra symbol: FUN_0080eae0 */


void FUN_0080eae0(longlong param_1,undefined *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_PTR_01e13fa8;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x100) + 0x100);
  if (plVar1 == (longlong *)0x0) {
    bVar3 = true;
  }
  else {
    bVar3 = (undefined *)*plVar1 != param_2;
  }
  if (bVar3) {
    FUN_00410f20(plVar1);
    uVar2 = (**(code **)(param_2 + 0x78))(param_2,1,*(undefined8 *)(param_1 + 0x100));
    *(undefined8 *)(*(longlong *)(param_1 + 0x100) + 0x100) = uVar2;
  }
  return;
}

