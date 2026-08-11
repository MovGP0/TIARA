/* Ghidra address: 01521960 */
/* Ghidra symbol: FUN_01521960 */


longlong FUN_01521960(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    FUN_01aaaaf0(lVar1,0);
    uVar2 = FUN_004095c0(800);
    *(undefined8 *)(lVar1 + 0x19c58) = uVar2;
    *(undefined2 *)(lVar1 + 0x19c60) = 0;
    *(undefined8 *)(lVar1 + 0x1a5c8) = 0;
    *(undefined8 *)(lVar1 + 0x1a5d0) = 0;
    *PTR_DAT_02002d10 = 0;
    *PTR_DAT_02003530 = 0;
    DAT_0210ed48 = lVar1;
    FUN_015232c0(lVar1);
    if (*PTR_DAT_02002d10 == '\0') {
      FUN_01aaaa50(lVar1);
      FUN_01aad7c0(lVar1);
      uVar2 = FUN_004095c0((ulonglong)*(ushort *)(lVar1 + 0x10) << 3);
      *(undefined8 *)(lVar1 + 0x19c40) = uVar2;
      FUN_0040d200(uVar2,(ulonglong)*(ushort *)(lVar1 + 0x10) << 3,0);
      iVar3 = 1;
      for (uVar4 = (uint)*(ushort *)(lVar1 + 0x10); uVar4 != 0; uVar4 = uVar4 - 1) {
        uVar2 = FUN_014f9520(&DAT_014f8ea8,1);
        *(undefined8 *)(*(longlong *)(lVar1 + 0x19c40) + -8 + (longlong)iVar3 * 8) = uVar2;
        iVar3 = iVar3 + 1;
      }
      uVar2 = FUN_01d34560(&PTR_FUN_00dadb90,1,5,5);
      *(undefined8 *)(lVar1 + 0x19c48) = uVar2;
      uVar2 = FUN_014f96c0(&DAT_014f9118,1);
      *(undefined8 *)PTR_DAT_02003c40 = uVar2;
      param_1 = lVar1;
      if (*PTR_DAT_02002ce0 != '\0') {
        param_1 = FUN_004109a0(lVar1,local_res10[0]);
      }
    }
    else {
      param_1 = FUN_004109a0(lVar1,local_res10[0]);
    }
  }
  return param_1;
}

