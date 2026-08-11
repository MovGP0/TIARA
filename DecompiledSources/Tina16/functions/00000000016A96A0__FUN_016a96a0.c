/* Ghidra address: 016a96a0 */
/* Ghidra symbol: FUN_016a96a0 */


void FUN_016a96a0(undefined8 param_1,longlong param_2,undefined1 param_3,int *param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_4 != (int *)0x0) {
    if ((*(longlong *)(param_4 + 0x1a) == 0) && (*param_4 == 9)) {
      iVar3 = param_4[0x13];
      if (iVar3 < 0x33) {
        if (iVar3 == 0x32) {
          if (param_2 != 0) {
            uVar1 = FUN_016e7300(&PTR_FUN_016e1688,1,param_1,param_2,param_3,param_4,param_5);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
          if (*(longlong *)(param_4 + 0x18) != 0) {
            iVar3 = param_4[0x15];
            iVar2 = 0;
            if (-1 < iVar3 + -1) {
              do {
                FUN_016a96a0(param_1,param_2,param_3,
                             *(undefined8 *)(*(longlong *)(param_4 + 0x18) + (longlong)iVar2 * 0x10)
                             ,param_5);
                FUN_016a96a0(param_1,param_2,param_3,
                             *(undefined8 *)
                              (*(longlong *)(param_4 + 0x18) + 8 + (longlong)iVar2 * 0x10),param_5);
                iVar2 = iVar2 + 1;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
        }
        else if (iVar3 < 0x22) {
          if (iVar3 == 0x21) {
            if (param_2 != 0) {
              uVar1 = FUN_016e8960(&PTR_FUN_016e1b08,1,param_1,param_2,param_3,0,0);
              *(undefined8 *)(param_4 + 0x1a) = uVar1;
            }
          }
          else if (iVar3 == 0xc) {
            if (param_2 != 0) {
              uVar1 = FUN_016e4f70(&PTR_FUN_016dfff0,1,param_1,param_2,param_3,0,0);
              *(undefined8 *)(param_4 + 0x1a) = uVar1;
            }
          }
          else if (iVar3 == 0x18) {
            if (param_2 != 0) {
              uVar1 = FUN_016e5260(&PTR_FUN_016e0448,1,param_1,param_2,param_3,0,0);
              *(undefined8 *)(param_4 + 0x1a) = uVar1;
            }
          }
          else if ((iVar3 == 0x19) && (param_2 != 0)) {
            uVar1 = FUN_016e5150(&PTR_FUN_016e0730,1,param_1,param_2,param_3,0,0);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
        }
        else if (iVar3 == 0x28) {
          if (param_2 != 0) {
            uVar1 = FUN_016e6f90(&PTR_FUN_016e1250,1,param_1,param_2,param_3,0,0);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
        }
        else if ((iVar3 == 0x2b) && (param_2 != 0)) {
          uVar1 = FUN_016e66e0(&PTR_FUN_016e0ea8,1,param_1,param_2,param_3,0,0);
          *(undefined8 *)(param_4 + 0x1a) = uVar1;
        }
      }
      else if (iVar3 < 0x3d) {
        if (iVar3 == 0x3c) {
          if (param_2 != 0) {
            uVar1 = FUN_016e8b80(&PTR_FUN_016e1d68,1,param_1,param_2,param_3,0,0);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
        }
        else if (iVar3 == 0x34) {
          if (param_2 != 0) {
            uVar1 = FUN_016e35b0(&PTR_FUN_016df478,1,param_1,param_2,param_3,0,0);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
        }
        else if (iVar3 == 0x35) {
          if (param_2 != 0) {
            uVar1 = FUN_016e2f60(&PTR_FUN_016df0a8,1,param_1,param_2,param_3,0,0);
            *(undefined8 *)(param_4 + 0x1a) = uVar1;
          }
        }
        else if ((iVar3 == 0x38) && (param_2 != 0)) {
          uVar1 = FUN_016e56e0(&PTR_FUN_016e0a18,1,param_1,param_2,param_3,0,0);
          *(undefined8 *)(param_4 + 0x1a) = uVar1;
        }
      }
      else if (iVar3 == 0x3d) {
        if (param_2 != 0) {
          uVar1 = FUN_016e8d10(&PTR_FUN_016e2000,1,param_1,param_2,param_3,0,0);
          *(undefined8 *)(param_4 + 0x1a) = uVar1;
        }
      }
      else if ((iVar3 == 0x3e) && (param_2 != 0)) {
        uVar1 = FUN_016e8e50(&PTR_FUN_016e2288,1,param_1,param_2,param_3,0,0);
        *(undefined8 *)(param_4 + 0x1a) = uVar1;
      }
    }
    FUN_016a96a0(param_1,param_2,param_3,*(undefined8 *)(param_4 + 2),param_5);
    FUN_016a96a0(param_1,param_2,param_3,*(undefined8 *)(param_4 + 4),param_5);
  }
  return;
}

