/* Ghidra address: 008779a0 */
/* Ghidra symbol: FUN_008779a0 */


ulonglong FUN_008779a0(void)

{
  int iVar1;
  undefined8 uVar2;
  uint unaff_EBX;
  uint uVar3;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  uint local_c4 [17];
  short local_7e;
  int local_70;
  short local_2a;
  int local_1c;
  
  local_d8 = 0;
  local_d0 = 0;
  iVar1 = thunk_FUN_03a92fc6(local_c4);
  if (iVar1 == -1) {
    FUN_0041ddd0(&local_d0,PTR_PTR_02005688);
    uVar2 = FUN_0086dfd0(&PTR_FUN_0086f0a8,1,local_d0);
    FUN_004134c0(uVar2);
    uVar3 = unaff_EBX;
  }
  else {
    uVar3 = local_c4[0];
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (local_7e != 0) {
          uVar3 = local_c4[0] + local_70;
        }
      }
      else if (iVar1 == 2) {
        if (local_2a != 0) {
          uVar3 = local_c4[0] + local_1c;
        }
      }
      else {
        FUN_0041ddd0(&local_d8,PTR_PTR_02005688);
        uVar2 = FUN_0086dfd0(&PTR_FUN_0086f0a8,1,local_d8);
        FUN_004134c0(uVar2);
        uVar3 = unaff_EBX;
      }
    }
  }
  iVar1 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  local_e0 = FUN_00448a90((longlong)iVar1 / 0x3c & 0xffffffff,(longlong)iVar1 % 0x3c & 0xffffffff,0,
                          0);
  if (0 < (int)uVar3) {
    local_e0 = local_e0 ^ 0x8000000000000000;
  }
  FUN_00414560(&local_d8,2);
  return local_e0;
}

