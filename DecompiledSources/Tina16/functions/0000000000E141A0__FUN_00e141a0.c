/* Ghidra address: 00e141a0 */
/* Ghidra symbol: FUN_00e141a0 */


byte FUN_00e141a0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte local_2d;
  int local_2c;
  
  iVar7 = *(int *)(param_1 + 0x10);
  bVar5 = 0;
  bVar6 = 0;
  local_2c = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_01d347d0(param_1,local_2c);
      uVar1 = *(undefined4 *)(lVar4 + 0x18);
      if (*(char *)(lVar4 + 8) == '\0') {
        bVar2 = FUN_01d3f3e0(uVar1,0);
      }
      else {
        bVar2 = FUN_01d3f4b0(*(undefined8 *)(lVar4 + 0x10),0);
      }
      bVar3 = FUN_01d3f6f0(uVar1);
      if (param_2 == 1) {
        bVar5 = bVar5 | bVar2 | bVar3;
      }
      else if (param_2 == 2) {
        bVar6 = bVar6 | bVar2 == 0 | bVar3;
      }
      local_2c = local_2c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if ((param_2 != 1) && (bVar5 = local_2d, param_2 == 2)) {
    bVar5 = bVar6;
  }
  local_2d = bVar5;
  return local_2d;
}

