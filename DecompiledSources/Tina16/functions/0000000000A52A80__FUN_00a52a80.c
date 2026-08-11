/* Ghidra address: 00a52a80 */
/* Ghidra symbol: FUN_00a52a80 */


void FUN_00a52a80(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"span");
  iVar4 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"thead");
  if (((iVar4 == 0) || (iVar4 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"tbody"), iVar4 == 0))
     || (iVar4 = FUN_00416db0(*(undefined8 *)(param_3 + 0x38),L"tfoot"), iVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar4 = FUN_00416db0(local_res10[0],L"table");
  bVar6 = 0;
  do {
    if (iVar3 == 0) {
      FUN_00461840(param_1 + 0x78 + (ulonglong)bVar6 * 0x18,param_3 + 0x78 + (ulonglong)bVar6 * 0x18
                  );
    }
    else if (bVar2) {
      uVar7 = (ulonglong)bVar6;
      FUN_00461840(param_1 + 0x78 + uVar7 * 0x18,param_3 + 0x78 + uVar7 * 0x18);
      *(undefined1 *)(param_1 + 0x6c0 + uVar7) = *(undefined1 *)(param_3 + 0x6c0 + uVar7);
    }
    else {
      uVar7 = (ulonglong)bVar6;
      if (uVar7 < 0x35) {
        if (4 < uVar7 - 8) {
          if ((uVar7 - 0xd < 4) || (uVar7 - 0x12 < 0x1a)) {
            FUN_00468530(param_1 + 0x78 + (ulonglong)bVar6 * 0x18,0xff439eb2,0xfffffffffffffffc);
          }
          else if (uVar7 - 0x12 != 0x1f) {
LAB_00a52c85:
            FUN_00461840(param_1 + 0x78 + (ulonglong)bVar6 * 0x18,
                         param_3 + 0x78 + (ulonglong)bVar6 * 0x18);
          }
        }
      }
      else if ((1 < uVar7 - 0x35) && (2 < uVar7 - 0x38)) {
        if (uVar7 == 0x3c) {
          if (iVar4 == 0) {
            FUN_00468a10(param_1 + 0x78 + (ulonglong)bVar6 * 0x18,L"normal");
          }
          else {
            FUN_00461840(param_1 + 0x78 + (ulonglong)bVar6 * 0x18,
                         param_3 + 0x78 + (ulonglong)bVar6 * 0x18);
          }
        }
        else if (2 < uVar7 - 0x3e) goto LAB_00a52c85;
      }
    }
    bVar6 = bVar6 + 1;
    if (bVar6 == 0x43) {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_3 + 8);
      FUN_00414ad0(param_1 + 0x28,*(undefined8 *)(param_3 + 0x28));
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_3 + 0x68);
      FUN_00a53800(param_1,*(undefined4 *)(param_3 + 0x70));
      FUN_00414ad0(param_1 + 0x58,*(undefined8 *)(param_3 + 0x58));
      cVar1 = *(char *)(param_3 + 0x20);
      *(char *)(param_1 + 0x20) = cVar1;
      if (cVar1 != '\0') {
        if (*(longlong *)(param_1 + 0x748) == 0) {
          uVar5 = FUN_00410e60(&DAT_00a4d720,1);
          *(undefined8 *)(param_1 + 0x748) = uVar5;
        }
        FUN_00a4ddc0(*(undefined8 *)(param_1 + 0x748),*(undefined8 *)(param_3 + 0x748));
      }
      FUN_00414480(local_res10);
      return;
    }
  } while( true );
}

