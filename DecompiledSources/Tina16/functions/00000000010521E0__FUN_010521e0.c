/* Ghidra address: 010521e0 */
/* Ghidra symbol: FUN_010521e0 */


undefined1 FUN_010521e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  uVar3 = FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
  lVar4 = FUN_00f75200(uVar3,local_res10[0]);
  if (lVar4 != 0) {
    cVar1 = FUN_00f6f9b0(lVar4,0x40);
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_01052232;
    }
  }
  uVar2 = 0;
LAB_01052232:
  FUN_00414480(local_res10);
  return uVar2;
}

