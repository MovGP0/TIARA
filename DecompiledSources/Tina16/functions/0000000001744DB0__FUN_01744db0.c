/* Ghidra address: 01744db0 */
/* Ghidra symbol: FUN_01744db0 */


undefined8 * FUN_01744db0(undefined8 param_1,undefined8 *param_2,byte param_3)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3 < 9) {
    if (param_3 == 8) {
      FUN_00498350(&local_38,0x28,0x28,0x40,0x40);
    }
    else if (param_3 < 5) {
      if (param_3 == 4) {
        FUN_00498350(&local_38,8,0x48,0x20,0x60);
      }
      else if (param_3 == 0) {
        FUN_00498350(&local_38,8,0x88,0x40,0xa0);
      }
      else if (param_3 == 1) {
        FUN_00498350(&local_38,8,0x68,0x20,0x80);
      }
      else if (param_3 == 2) {
        FUN_00498350(&local_38,0x28,0x68,0x40,0x80);
      }
      else if (param_3 == 3) {
        FUN_00498350(&local_38,0x48,0x68,0x60,0x80);
      }
    }
    else if (param_3 == 5) {
      FUN_00498350(&local_38,0x28,0x48,0x40,0x60);
    }
    else if (param_3 == 6) {
      FUN_00498350(&local_38,0x48,0x48,0x60,0x60);
    }
    else if (param_3 == 7) {
      FUN_00498350(&local_38,8,0x28,0x20,0x40);
    }
  }
  else if (param_3 < 0x31) {
    if (param_3 == 0x30) {
      FUN_00498350(&local_38,0x68,8,0x80,0x20);
    }
    else if (param_3 == 9) {
      FUN_00498350(&local_38,0x48,0x28,0x60,0x40);
    }
    else if (param_3 == 10) {
      FUN_00498350(&local_38,8,8,0x20,0x20);
    }
    else if (param_3 == 0xb) {
      FUN_00498350(&local_38,0x48,0x88,0x60,0xa0);
    }
    else if (param_3 == 0x10) {
      FUN_00498350(&local_38,0x68,0x28,0x80,0x60);
    }
  }
  else if (param_3 == 0x50) {
    FUN_00498350(&local_38,0x48,8,0x60,0x20);
  }
  else if (param_3 == 0x90) {
    FUN_00498350(&local_38,0x28,8,0x40,0x20);
  }
  else if (param_3 == 0xd0) {
    FUN_00498350(&local_38,0x68,0x68,0x80,0xa0);
  }
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}

