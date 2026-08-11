/* Ghidra address: 008fe690 */
/* Ghidra symbol: FUN_008fe690 */


undefined8 * FUN_008fe690(undefined8 *param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  if ((param_3 & 1) == 0) {
    FUN_00414ad0(param_1,L"file://");
  }
  else {
    FUN_00414ad0(param_1,L"file://localhost");
  }
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  if (0 < iVar4) {
    FUN_00416ad0(param_1,&DAT_008fe8e4);
    iVar3 = 1;
    if (0 < iVar4) {
      do {
        bVar1 = *(byte *)(param_2 + -2 + (longlong)iVar3 * 2);
        uVar2 = (ulonglong)bVar1;
        if (uVar2 < 0x41) {
          if (uVar2 < 0x2d) {
            if ((uVar2 != 0x21) && (3 < uVar2 - 0x27)) goto LAB_008fe80e;
          }
          else if ((1 < uVar2 - 0x2d) && (9 < uVar2 - 0x30)) {
            if (uVar2 - 0x30 != 10) goto LAB_008fe80e;
            if ((param_3 & 2) == 0) {
              FUN_00416ad0(param_1,&DAT_008fe904);
            }
            else {
              FUN_00416ad0(param_1,&DAT_008fe8f4);
            }
            goto LAB_008fe849;
          }
LAB_008fe7a9:
          FUN_00416780(&local_20,*(undefined2 *)(param_2 + -2 + (longlong)iVar3 * 2));
          FUN_00416ad0(param_1,local_20);
        }
        else {
          if (uVar2 < 0x60) {
            if ((uVar2 == 0x5f) || (uVar2 - 0x41 < 0x1a)) goto LAB_008fe7a9;
            if (uVar2 - 0x41 == 0x1b) {
              FUN_00416ad0(param_1,&DAT_008fe8e4);
              goto LAB_008fe849;
            }
          }
          else if ((uVar2 - 0x61 < 0x1a) || (uVar2 - 0x61 == 0x1d)) goto LAB_008fe7a9;
LAB_008fe80e:
          FUN_0043fba0(&local_28,bVar1,2);
          FUN_00416cd0(param_1,3,*param_1,&LAB_008fe918,local_28);
        }
LAB_008fe849:
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar4);
    }
  }
  FUN_00414560(&local_28,2);
  return param_1;
}

