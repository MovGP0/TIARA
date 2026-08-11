/* Ghidra address: 00b31290 */
/* Ghidra symbol: FUN_00b31290 */


void FUN_00b31290(longlong param_1)

{
  byte bVar1;
  
  **(undefined1 **)(param_1 + 0x38) = 0;
  FUN_004144d0(*(longlong *)(param_1 + 0x38) + 2);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 1);
  if (bVar1 < 0xb) {
    if (bVar1 == 10) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3150c);
    }
    else if (bVar1 < 7) {
      if (bVar1 == 6) {
        FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b314ec);
      }
      else if (bVar1 == 3) {
        FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b314bc);
      }
      else if (bVar1 == 4) {
        FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b314cc);
      }
      else if (bVar1 == 5) {
        FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b314dc);
      }
    }
    else if (bVar1 == 8) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3155c);
    }
    else if (bVar1 == 9) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b314fc);
    }
  }
  else if (bVar1 < 0xf) {
    if (bVar1 == 0xe) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3154c);
    }
    else if (bVar1 == 0xb) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3151c);
    }
    else if (bVar1 == 0xc) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3152c);
    }
    else if (bVar1 == 0xd) {
      FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&DAT_00b3153c);
    }
  }
  else if (bVar1 == 0x11) {
    FUN_00414bf0(*(longlong *)(param_1 + 0x38) + 10,&LAB_00b3156c);
  }
  else if (bVar1 == 0x15) {
    FUN_004144d0(*(longlong *)(param_1 + 0x38) + 10);
  }
  return;
}

