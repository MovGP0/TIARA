/* Ghidra address: 01955a60 */
/* Ghidra symbol: FUN_01955a60 */


void FUN_01955a60(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if ((*(uint *)(*(longlong *)(param_1 + 0x1a0) + 0xa0) & 0x20) != 0) {
    FUN_019554e0(param_1,local_20);
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),local_20[0]);
    if (iVar3 == 0) {
      cVar2 = FUN_01950810(param_1);
      if (cVar2 == '\0') {
        bVar1 = true;
        goto LAB_01955ac8;
      }
    }
  }
  bVar1 = false;
LAB_01955ac8:
  FUN_01951440(param_1,param_2);
  if (bVar1) {
    FUN_01955810(param_1,param_2);
  }
  FUN_00414480(local_20);
  return;
}

