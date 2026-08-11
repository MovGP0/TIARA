/* Ghidra address: 0122ffb0 */
/* Ghidra symbol: FUN_0122ffb0 */


void FUN_0122ffb0(void)

{
  int iVar1;
  uint uVar2;
  int in_stack_00000028;
  int in_stack_00000030;
  
  DAT_02107700 = in_stack_00000028;
  DAT_02107704 = in_stack_00000030;
  uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02004040 >> 0x1f;
  if (((int)((in_stack_00000028 - *(int *)PTR_DAT_02004040 ^ uVar2) - uVar2) < 3) &&
     (uVar2 = in_stack_00000030 - *(int *)PTR_DAT_02003a80 >> 0x1f,
     (int)((in_stack_00000030 - *(int *)PTR_DAT_02003a80 ^ uVar2) - uVar2) < 3)) {
    DAT_02107700 = *(int *)PTR_DAT_02004040;
    DAT_02107704 = *(int *)PTR_DAT_02003a80;
    DAT_02107708 = 1;
    if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
       (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
      *(undefined4 *)PTR_DAT_02002748 = *(undefined4 *)PTR_DAT_02003528;
      *(undefined4 *)PTR_DAT_02001398 = *(undefined4 *)PTR_DAT_02003528;
    }
  }
  else {
    uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02003528 >> 0x1f;
    if (((int)((in_stack_00000028 - *(int *)PTR_DAT_02003528 ^ uVar2) - uVar2) < 3) &&
       (uVar2 = in_stack_00000030 - *(int *)PTR_DAT_02005a18 >> 0x1f,
       (int)((in_stack_00000030 - *(int *)PTR_DAT_02005a18 ^ uVar2) - uVar2) < 3)) {
      DAT_02107700 = *(int *)PTR_DAT_02003528;
      DAT_02107704 = *(int *)PTR_DAT_02005a18;
      DAT_02107708 = 2;
      if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
         (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
        *(undefined4 *)PTR_DAT_02002748 = *(undefined4 *)PTR_DAT_02004040;
        *(undefined4 *)PTR_DAT_02001398 = *(undefined4 *)PTR_DAT_02004040;
      }
    }
    else {
      uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02002748 >> 0x1f;
      if (((int)((in_stack_00000028 - *(int *)PTR_DAT_02002748 ^ uVar2) - uVar2) < 3) &&
         (uVar2 = in_stack_00000030 - *(int *)PTR_DAT_020020a8 >> 0x1f,
         (int)((in_stack_00000030 - *(int *)PTR_DAT_020020a8 ^ uVar2) - uVar2) < 3)) {
        DAT_02107700 = *(int *)PTR_DAT_02002748;
        DAT_02107704 = *(int *)PTR_DAT_020020a8;
        DAT_02107708 = 3;
      }
      else {
        uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02001398 >> 0x1f;
        iVar1 = (in_stack_00000028 - *(int *)PTR_DAT_02001398 ^ uVar2) - uVar2;
        if ((iVar1 < 3) &&
           (uVar2 = in_stack_00000030 - *(int *)PTR_DAT_020020a8 >> 0x1f,
           (int)((in_stack_00000030 - *(int *)PTR_DAT_020020a8 ^ uVar2) - uVar2) < 3)) {
          DAT_02107700 = *(int *)PTR_DAT_02001398;
          DAT_02107704 = *(int *)PTR_DAT_020020a8;
          DAT_02107708 = 4;
        }
        else {
          uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02004040 >> 0x1f;
          if ((int)((in_stack_00000028 - *(int *)PTR_DAT_02004040 ^ uVar2) - uVar2) < 3) {
            DAT_02107700 = *(int *)PTR_DAT_02004040;
            if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
               (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
              *(undefined4 *)PTR_DAT_02002748 = *(undefined4 *)PTR_DAT_02003528;
              *(undefined4 *)PTR_DAT_02001398 = *(undefined4 *)PTR_DAT_02003528;
            }
            DAT_02107708 = 0xc;
          }
          else {
            uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02003528 >> 0x1f;
            if ((int)((in_stack_00000028 - *(int *)PTR_DAT_02003528 ^ uVar2) - uVar2) < 3) {
              DAT_02107700 = *(int *)PTR_DAT_02003528;
              if ((*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) ||
                 (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48)) {
                *(undefined4 *)PTR_DAT_02002748 = *(undefined4 *)PTR_DAT_02004040;
                *(undefined4 *)PTR_DAT_02001398 = *(undefined4 *)PTR_DAT_02004040;
              }
              DAT_02107708 = 0xf;
            }
            else {
              uVar2 = in_stack_00000028 - *(int *)PTR_DAT_02002748 >> 0x1f;
              if ((int)((in_stack_00000028 - *(int *)PTR_DAT_02002748 ^ uVar2) - uVar2) < 3) {
                DAT_02107700 = *(int *)PTR_DAT_02002748;
                DAT_02107708 = 0xd;
              }
              else if (iVar1 < 3) {
                DAT_02107700 = *(int *)PTR_DAT_02001398;
                DAT_02107708 = 0xe;
              }
              else {
                uVar2 = in_stack_00000030 - *(int *)PTR_DAT_02003a80 >> 0x1f;
                if (((int)((in_stack_00000030 - *(int *)PTR_DAT_02003a80 ^ uVar2) - uVar2) < 3) &&
                   (in_stack_00000028 < *(int *)PTR_DAT_02004040)) {
                  DAT_02107704 = *(int *)PTR_DAT_02003a80;
                  DAT_02107708 = 0x16;
                }
                else {
                  uVar2 = in_stack_00000030 - *(int *)PTR_DAT_020020a8 >> 0x1f;
                  if (((int)((in_stack_00000030 - *(int *)PTR_DAT_020020a8 ^ uVar2) - uVar2) < 3) &&
                     ((in_stack_00000028 < *(int *)PTR_DAT_02001398 &&
                      (*(int *)PTR_DAT_02002748 < in_stack_00000028)))) {
                    DAT_02107704 = *(int *)PTR_DAT_020020a8;
                    DAT_02107708 = 0x17;
                  }
                  else {
                    uVar2 = in_stack_00000030 - *(int *)PTR_DAT_02005a18 >> 0x1f;
                    if (((int)((in_stack_00000030 - *(int *)PTR_DAT_02005a18 ^ uVar2) - uVar2) < 3)
                       && (*(int *)PTR_DAT_02003528 < in_stack_00000028)) {
                      DAT_02107704 = *(int *)PTR_DAT_02005a18;
                      DAT_02107708 = 0x18;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

