/* Ghidra address: 00691770 */
/* Ghidra symbol: FUN_00691770 */


void FUN_00691770(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20 [2];
  
  local_20[0] = CONCAT44((int)*(short *)(param_2 + 0x12),(int)*(short *)(param_2 + 0x10));
  cVar1 = FUN_0068ff80(param_1);
  if (cVar1 == '\0') {
    FUN_006903f0(param_1,local_30);
    cVar1 = FUN_00423210(local_30,local_20);
    if (cVar1 == '\0') {
      FUN_00690520(param_1,local_40);
      cVar1 = FUN_00423210(local_40,local_20);
      if (cVar1 == '\0') {
        FUN_0068fff0(param_1,local_50);
        cVar1 = FUN_00423210(local_50,local_20);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x48) = 0x1c;
          FUN_0068ff40(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4a) = 8;
        FUN_0068ff40(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x49) = 4;
      FUN_0068ff40(param_1);
    }
  }
  else {
    FUN_00690a90(param_1,local_60);
    cVar1 = FUN_00423210(local_60,local_20);
    if (cVar1 == '\0') {
      FUN_00690bc0(param_1,local_70);
      cVar1 = FUN_00423210(local_70,local_20);
      if (cVar1 == '\0') {
        FUN_00690690(param_1,local_80);
        cVar1 = FUN_00423210(local_80,local_20);
        if (cVar1 != '\0') {
          *(undefined1 *)(param_1 + 0x4b) = 0x18;
          FUN_0068ff40(param_1);
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x4d) = 0x10;
        FUN_0068ff40(param_1);
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x4c) = 0xc;
      FUN_0068ff40(param_1);
    }
  }
  return;
}

