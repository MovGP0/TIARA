/* Ghidra address: 0040a6f0 */
/* Ghidra symbol: FUN_0040a6f0 */


undefined8 FUN_0040a6f0(undefined8 param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong local_res10 [3];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30 [2];
  
  local_res10[0] = param_2;
  uVar3 = FUN_0040a2e0(local_res10);
  uVar3 = uVar3 & 0xff;
  if (uVar3 < 4) {
    if (uVar3 < 2) {
      bVar1 = FUN_0040a150(local_res10,7);
      FUN_0040a690(param_1,0x7f < bVar1,0,0xffffc001);
    }
    else if (uVar3 - 2 < 2) {
      iVar5 = -0x3fe;
      for (uVar3 = (local_res10[0] & 0xfffffffffffff) << 0xb; (uVar3 & 0x8000000000000000) == 0;
          uVar3 = uVar3 * 2) {
        iVar5 = iVar5 + -1;
      }
      bVar1 = FUN_0040a150(local_res10,7);
      FUN_0040a690(param_1,0x7f < bVar1,uVar3,iVar5);
    }
  }
  else if (uVar3 - 4 < 2) {
    local_30[0] = local_res10[0];
    bVar1 = FUN_0040a150(local_30,7);
    local_38 = local_res10[0];
    lVar4 = FUN_0040a200(&local_38);
    local_40 = local_res10[0];
    uVar2 = FUN_0040a260(&local_40);
    FUN_0040a690(param_1,CONCAT71((int7)((ulonglong)unaff_RDI >> 8),0x7f < bVar1) & 0xffffffff,
                 lVar4 << 0xb,uVar2);
  }
  else if (uVar3 - 6 < 2) {
    bVar1 = FUN_0040a150(local_res10,7);
    FUN_0040a690(param_1,0x7f < bVar1,0x8000000000000000,0x4000);
  }
  else if (uVar3 - 6 == 2) {
    FUN_0040a690(param_1,1,0xc000000000000000,0x4000);
  }
  return param_1;
}

