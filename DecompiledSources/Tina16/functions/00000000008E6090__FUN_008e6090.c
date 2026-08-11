/* Ghidra address: 008e6090 */
/* Ghidra symbol: FUN_008e6090 */


undefined8 FUN_008e6090(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = thunk_FUN_041a78f9();
  if (iVar1 < 0x4e4) {
    if (iVar1 == 0x4e3) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dba58,1);
      return uVar2;
    }
    if (iVar1 < 0x3b6) {
      if (iVar1 == 0x3b5) {
        return 0;
      }
      if (iVar1 == 0x36a) {
        uVar2 = FUN_008e6ec0(&PTR_FUN_008d9070,1);
        return uVar2;
      }
      if (iVar1 == 0x3a4) {
        return 0;
      }
      if (iVar1 == 0x3a8) {
        return 0;
      }
    }
    else {
      if (iVar1 == 0x3b6) {
        return 0;
      }
      if (iVar1 == 0x4b0) {
        return 0;
      }
      if (iVar1 == 0x4e2) {
        uVar2 = FUN_008e6ec0(&PTR_FUN_008db7d0,1);
        return uVar2;
      }
    }
  }
  else if (iVar1 < 0x4e8) {
    if (iVar1 == 0x4e7) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dc478,1);
      return uVar2;
    }
    if (iVar1 == 0x4e4) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dbce0,1);
      return uVar2;
    }
    if (iVar1 == 0x4e5) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dbf68,1);
      return uVar2;
    }
    if (iVar1 == 0x4e6) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dc1f0,1);
      return uVar2;
    }
  }
  else {
    if (iVar1 == 0x4e8) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dc700,1);
      return uVar2;
    }
    if (iVar1 == 0x4e9) {
      uVar2 = FUN_008e6ec0(&PTR_FUN_008dc988,1);
      return uVar2;
    }
  }
  return 0;
}

