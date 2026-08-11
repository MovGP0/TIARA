/* Ghidra address: 0040a8e0 */
/* Ghidra symbol: FUN_0040a8e0 */


double FUN_0040a8e0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  double dVar5;
  double local_48;
  double local_40;
  longlong local_32;
  undefined2 uStack_2a;
  
  local_32 = *param_1;
  uStack_2a = (undefined2)param_1[1];
  uVar4 = FUN_0040a5e0(&local_32);
  uVar4 = uVar4 & 0xff;
  if (uVar4 < 4) {
    if (uVar4 < 2) {
      bVar1 = FUN_0040a3e0(&local_32,9);
      FUN_0040a380(&local_40,0x7f < bVar1,0,0xfffffc01);
    }
    else if (uVar4 - 2 < 2) {
      bVar1 = FUN_0040a3e0(&local_32,9);
      FUN_0040a380(&local_40,0x7f < bVar1,0,0xfffffc01);
    }
  }
  else if (uVar4 - 4 < 2) {
    iVar2 = FUN_0040a570(&local_32);
    if (iVar2 < 0x400) {
      iVar2 = FUN_0040a570(&local_32);
      if (iVar2 < -0x433) {
        bVar1 = FUN_0040a3e0(&local_32,9);
        FUN_0040a380(&local_40,0x7f < bVar1,0,0xfffffc01);
      }
      else {
        iVar2 = FUN_0040a570(&local_32);
        if (iVar2 < -0x3fe) {
          bVar1 = FUN_0040a3e0(&local_32,9);
          FUN_0040a380(&local_40,0x7f < bVar1,0x10000000000000,0xfffffc02);
          dVar5 = (double)local_32;
          if (local_32 < 0) {
            dVar5 = dVar5 + 1.8446744073709552e+19;
          }
          local_40 = local_40 * (dVar5 / 9.223372036854776e+18);
          iVar2 = FUN_0040a570(&local_32);
          FUN_0040a380(&local_48,0,0x10000000000000,iVar2 + 0x3fe);
          local_40 = local_40 * local_48;
        }
        else {
          bVar1 = FUN_0040a3e0(&local_32,9);
          uVar3 = FUN_0040a570(&local_32);
          FUN_0040a380(&local_40,0x7f < bVar1,0x10000000000000,uVar3);
          dVar5 = (double)local_32;
          if (local_32 < 0) {
            dVar5 = dVar5 + 1.8446744073709552e+19;
          }
          local_40 = local_40 * (dVar5 / 9.223372036854776e+18);
        }
      }
    }
    else {
      FUN_00409f50(8,1);
      bVar1 = FUN_0040a3e0(&local_32,9);
      if (bVar1 < 0x80) {
        local_40 = INFINITY;
      }
      else {
        local_40 = -INFINITY;
      }
    }
  }
  else if (uVar4 - 6 < 2) {
    bVar1 = FUN_0040a3e0(&local_32,9);
    FUN_0040a380(&local_40,0x7f < bVar1,0,0x400);
  }
  else if (uVar4 - 6 == 2) {
    FUN_0040a380(&local_40,1,0x8000000000000,0x400);
  }
  return local_40;
}

