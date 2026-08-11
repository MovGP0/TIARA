/* Ghidra address: 00accf30 */
/* Ghidra symbol: FUN_00accf30 */


void FUN_00accf30(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00acccb0(param_1,local_20);
  iVar2 = FUN_00416db0(local_20[0],*(undefined8 *)(param_1 + 0x160));
  if ((iVar2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x18), *(longlong *)(lVar1 + 0x148) != 0)) {
    (**(code **)(lVar1 + 0x148))
              (*(undefined8 *)(lVar1 + 0x150),*(undefined8 *)(lVar1 + 0xb8),param_1,
               *(undefined8 *)(param_1 + 0x128));
  }
  FUN_00414480(local_20);
  return;
}

