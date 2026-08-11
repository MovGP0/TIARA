/* Ghidra address: 00d9e150 */
/* Ghidra symbol: FUN_00d9e150 */


ulonglong FUN_00d9e150(void)

{
  ulonglong uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  byte in_stack_00000028;
  byte in_stack_00000038;
  undefined8 *in_stack_00000040;
  undefined8 local_20 [2];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  FUN_00423c20(local_20,0,0);
  *in_stack_00000040 = local_20[0];
  uVar1 = (ulonglong)in_stack_00000028;
  if (uVar1 < 0x18) {
    if (uVar1 < 0x13) {
      if (uVar1 == 0x12) {
        if (in_stack_00000038 < 2) {
          FUN_00423c20(local_20,1,1);
          *in_stack_00000040 = local_20[0];
        }
        goto LAB_00d9e657;
      }
      if (uVar1 - 2 < 8) {
        if (in_stack_00000038 == 0) {
          FUN_00423c20(local_20,2,2);
          *in_stack_00000040 = local_20[0];
        }
        else if (in_stack_00000038 == 1) {
          FUN_00423c20(local_20,3,3);
          *in_stack_00000040 = local_20[0];
        }
        else {
          uVar2 = 0;
        }
        goto LAB_00d9e657;
      }
      if (uVar1 - 10 < 2) {
        if (in_stack_00000038 == 0) {
          FUN_00423c20(local_20,2,0x18);
          *in_stack_00000040 = local_20[0];
        }
        else if (in_stack_00000038 == 1) {
          FUN_00423c20(local_20,3,0x19);
          *in_stack_00000040 = local_20[0];
        }
        goto LAB_00d9e657;
      }
      if (uVar1 - 0xc < 6) {
        if (in_stack_00000038 == 0) {
          FUN_00423c20(local_20,0xe,6);
          *in_stack_00000040 = local_20[0];
        }
        else if (in_stack_00000038 == 1) {
          FUN_00423c20(local_20,9,0x13);
          *in_stack_00000040 = local_20[0];
        }
        goto LAB_00d9e657;
      }
    }
    else {
      if (uVar1 == 0x13) {
        if (in_stack_00000038 == 0) {
          FUN_00423c20(local_20,2,2);
          *in_stack_00000040 = local_20[0];
        }
        else if (in_stack_00000038 == 1) {
          FUN_00423c20(local_20,3,3);
          *in_stack_00000040 = local_20[0];
        }
        goto LAB_00d9e657;
      }
      if (uVar1 - 0x14 < 4) {
        if (in_stack_00000038 == 0) {
          FUN_00423c20(local_20,6,6);
          *in_stack_00000040 = local_20[0];
        }
        else {
          FUN_00423c20(local_20,0x10,0x10);
          *in_stack_00000040 = local_20[0];
        }
        goto LAB_00d9e657;
      }
    }
  }
  else if (uVar1 < 0x21) {
    if (uVar1 == 0x20) {
      if (in_stack_00000038 == 0) {
        FUN_00423c20(local_20,1,4);
        *in_stack_00000040 = local_20[0];
      }
      else if (in_stack_00000038 == 1) {
        FUN_00423c20(local_20,1,6);
        *in_stack_00000040 = local_20[0];
      }
      goto LAB_00d9e657;
    }
    if (uVar1 - 0x18 < 3) {
      if (in_stack_00000038 == 0) {
        FUN_00423c20(local_20,6,1);
        *in_stack_00000040 = local_20[0];
      }
      else if (in_stack_00000038 == 1) {
        FUN_00423c20(local_20,7,7);
        *in_stack_00000040 = local_20[0];
      }
      goto LAB_00d9e657;
    }
    if (uVar1 == 0x1b) {
      if (in_stack_00000038 == 0) {
        FUN_00423c20(local_20,2,1);
        *in_stack_00000040 = local_20[0];
      }
      else if (in_stack_00000038 == 1) {
        FUN_00423c20(local_20,3,1);
        *in_stack_00000040 = local_20[0];
      }
      goto LAB_00d9e657;
    }
    if (uVar1 - 0x1c < 4) {
      if (in_stack_00000038 == 0) {
        FUN_00423c20(local_20,1,2);
        *in_stack_00000040 = local_20[0];
      }
      else if (in_stack_00000038 == 1) {
        FUN_00423c20(local_20,7,0x15);
        *in_stack_00000040 = local_20[0];
      }
      goto LAB_00d9e657;
    }
  }
  else {
    if (uVar1 - 0x21 < 2) {
      FUN_00423c20(local_20,0x10,0x10);
      *in_stack_00000040 = local_20[0];
      goto LAB_00d9e657;
    }
    if (uVar1 - 0x23 < 8) {
      FUN_00423c20(local_20,0,0);
      *in_stack_00000040 = local_20[0];
      goto LAB_00d9e657;
    }
  }
  uVar2 = 0;
LAB_00d9e657:
  return uVar2 & 0xffffffff;
}

