/* Ghidra address: 01966ad0 */
/* Ghidra symbol: FUN_01966ad0 */


undefined8 FUN_01966ad0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = *(undefined8 *)(param_1 + 0x2c8);
  local_28 = *(longlong *)(param_1 + 0x2c8);
  if ((*(longlong *)(local_28 + 0x18) == 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) {
    *(undefined8 *)(local_28 + 0x20) = 0;
    *(undefined8 *)(local_28 + 0x28) = 0;
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x20))
                      (*(longlong **)(param_1 + 0x2d8),1);
    FUN_00603f70(local_28,uVar2);
    lVar1 = *(longlong *)(param_1 + 0x2c8);
    *(longlong *)(lVar1 + 0x28) = param_1;
    *(code **)(lVar1 + 0x20) = FUN_01966ec0;
  }
  return local_10;
}

