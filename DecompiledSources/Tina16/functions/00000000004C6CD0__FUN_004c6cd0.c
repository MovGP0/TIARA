/* Ghidra address: 004c6cd0 */
/* Ghidra symbol: FUN_004c6cd0 */


void FUN_004c6cd0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  undefined8 local_20;
  
  local_20 = 0;
  lVar2 = FUN_00589390(*(undefined8 *)(param_1 + 0x48));
  uVar1 = **(undefined8 **)(lVar2 + 1);
  FUN_004c8510(*(undefined8 *)(param_1 + 0x60),0xb);
  uVar3 = 0;
  do {
    if (uVar3 < 0x20) {
      bVar4 = (1 << ((byte)uVar3 & 0x1f) & param_2) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_0058b0b0(&local_20,uVar1,uVar3);
      FUN_004c8440(*(undefined8 *)(param_1 + 0x60),local_20);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x20);
  FUN_004c8440(*(undefined8 *)(param_1 + 0x60),0);
  FUN_00414480(&local_20);
  return;
}

