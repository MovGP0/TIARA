/* Ghidra address: 01839be0 */
/* Ghidra symbol: FUN_01839be0 */


void FUN_01839be0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar4 = 0;
  do {
    iVar1 = FUN_0181e3e0(param_2);
    if (iVar1 <= iVar4) {
      FUN_00460ba0(&local_48);
      FUN_00414560(&local_30,3);
      return;
    }
    uVar2 = FUN_0181e3c0(param_2,iVar4);
    FUN_01837010(*(undefined8 *)(param_1 + 0x80),uVar2);
    FUN_00414ad0(param_3 + 0x38,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8));
    lVar3 = FUN_0181e3c0(param_2,iVar4);
    FUN_0043e1a0(&local_20,*(undefined8 *)(lVar3 + 0x18));
    uVar2 = FUN_0181e3c0(param_2,iVar4);
    FUN_0181e5f0(uVar2,&local_28,L"text");
    iVar1 = FUN_00416db0(local_20,&PTR_DAT_01839ef0);
    if (iVar1 == 0) {
      FUN_0043e1a0(&local_30,local_28);
      FUN_00414b50(&local_28,local_30);
      iVar1 = FUN_00416db0(local_28,&DAT_01839f04);
      if (iVar1 != 0) {
        iVar1 = FUN_0181e3e0(param_2);
        if (iVar1 + -1 <= iVar4) goto LAB_01839e67;
      }
      FUN_01832760(param_3,local_28);
    }
    else {
      iVar1 = FUN_00416db0(local_20,L"number");
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_20,L"string");
        if (iVar1 != 0) {
          iVar1 = FUN_00416db0(local_20,L"dsgn");
          if (iVar1 == 0) {
            uVar2 = FUN_0181e3c0(param_2,iVar4);
            uVar2 = FUN_01838880(*(undefined8 *)(param_1 + 0x80),uVar2,
                                 *(undefined8 *)(param_1 + 0x90),0);
            FUN_018329c0(param_3,uVar2);
          }
          else {
            iVar1 = FUN_00416db0(local_20,&DAT_01839f64);
            if (iVar1 == 0) {
              uVar2 = FUN_0181e3c0(param_2,iVar4);
              uVar2 = FUN_01839a30(*(undefined8 *)(param_1 + 0x80),uVar2,
                                   *(undefined8 *)(param_1 + 0x90));
              FUN_01832a00(param_3,uVar2);
            }
            else {
              iVar1 = FUN_00416db0(local_20,&DAT_01839f78);
              if (iVar1 == 0) {
                uVar2 = FUN_0181e3c0(param_2,iVar4);
                uVar2 = FUN_0181e3c0(uVar2,0);
                uVar2 = FUN_01838880(*(undefined8 *)(param_1 + 0x80),uVar2,
                                     *(undefined8 *)(param_1 + 0x90),1);
                FUN_018329c0(param_3,uVar2);
              }
              else {
                iVar1 = FUN_00416db0(local_20,L"expr");
                if (iVar1 == 0) {
                  uVar2 = FUN_0181e3c0(param_2,iVar4);
                  FUN_01839be0(param_1,uVar2,param_3);
                }
              }
            }
          }
          goto LAB_01839e67;
        }
      }
      FUN_01823700(&local_48,local_28);
      FUN_01832950(param_3,&local_48);
    }
LAB_01839e67:
    iVar4 = iVar4 + 1;
  } while( true );
}

