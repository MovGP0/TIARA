/* Ghidra address: 01d37030 */
/* Ghidra symbol: FUN_01d37030 */


void FUN_01d37030(longlong *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_40 [2];
  undefined8 *local_30;
  
  local_40[0] = 0;
  iVar3 = FUN_01cfd2d0();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_01cfd090(param_1,iVar6);
      bVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,iVar6,&local_30);
      if (bVar1 < 8) {
        if (bVar1 == 7) {
          FUN_00415020(lVar4 + 0x38,local_30,0x14);
          FUN_00415020(lVar4 + 0x4d,(undefined1 *)((longlong)local_30 + 0x15),0x10);
          *(undefined1 *)(lVar4 + 0x5e) = *(undefined1 *)((longlong)local_30 + 0x2f);
          uVar5 = FUN_017105e0(0);
          FUN_004167d0(local_40,local_30[0x27]);
          uVar2 = FUN_017171d0(uVar5,local_40[0]);
          *(undefined2 *)(lVar4 + 0x5f) = uVar2;
        }
        else if (bVar1 < 4) {
          if (bVar1 == 3) {
            *(undefined8 *)(lVar4 + 0x3c) = *local_30;
          }
          else if (bVar1 == 1) {
            FUN_00415020(lVar4 + 0x53,local_30,0x1e);
          }
          else if (bVar1 == 2) {
            *(undefined2 *)(lVar4 + 0x36) = *(undefined2 *)local_30;
          }
        }
        else if (bVar1 == 4) {
          FUN_00415020(lVar4 + 0x38,local_30,0x14);
          FUN_00415020(lVar4 + 0x4d,(undefined1 *)((longlong)local_30 + 0x15),0x10);
        }
        else if (bVar1 == 6) {
          *(undefined8 *)(lVar4 + 0x3c) = *local_30;
        }
      }
      else if (bVar1 == 8) {
        *(undefined1 *)(lVar4 + 0x35) = *(undefined1 *)local_30;
      }
      else if (bVar1 == 9) {
        FUN_00415020(lVar4 + 0x53,local_30,0x1e);
      }
      else if (bVar1 == 0xd) {
        *(undefined8 *)(lVar4 + 0x3e) = *local_30;
        *(undefined1 *)(lVar4 + 0x35) = *(undefined1 *)(local_30 + 1);
      }
      else if (bVar1 == 0x10) {
        *(undefined8 *)(lVar4 + 0x3c) = *local_30;
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(local_40);
  return;
}

