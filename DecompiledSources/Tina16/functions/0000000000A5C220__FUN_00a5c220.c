/* Ghidra address: 00a5c220 */
/* Ghidra symbol: FUN_00a5c220 */


void FUN_00a5c220(longlong param_1,byte param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  undefined1 local_d;
  undefined4 local_c;
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  uVar3 = (ulonglong)param_2;
  if (uVar3 < 0x3c) {
    if (uVar3 == 0x3b) {
      iVar2 = FUN_00416db0(local_res18[0],L"uppercase");
      if (iVar2 == 0) {
        FUN_00468530(param_1 + 0x600,1,1);
      }
      else {
        iVar2 = FUN_00416db0(local_res18[0],L"lowercase");
        if (iVar2 == 0) {
          FUN_00468530(param_1 + 0x600,2,1);
        }
        else {
          FUN_00468530(param_1 + 0x600,0,1);
        }
      }
      goto LAB_00a5c5b8;
    }
    if (uVar3 - 7 < 2) {
      cVar1 = FUN_00a602d0(local_res18[0],0,&local_c);
      if (cVar1 == '\0') {
        if (param_2 == 7) {
          FUN_00468530(param_1 + 0x120,0,0xfffffffffffffffc);
        }
        else {
          FUN_00468530(param_1 + 0x78 + (ulonglong)param_2 * 0x18,0x1fffffff,0xfffffffffffffffc);
        }
      }
      else {
        FUN_00468530(param_1 + 0x78 + (ulonglong)param_2 * 0x18,local_c,0xfffffffffffffffc);
      }
      goto LAB_00a5c5b8;
    }
    if (uVar3 - 0x1e < 4) {
      cVar1 = FUN_00a602d0(local_res18[0],0,&local_c);
      if (cVar1 == '\0') {
        FUN_0043e1a0(local_20,local_res18[0]);
        iVar2 = FUN_00416db0(local_20[0],L"currentcolor");
        if (iVar2 == 0) {
          FUN_00468a10(param_1 + 0x78 + (ulonglong)param_2 * 0x18,L"currentColor");
        }
      }
      else {
        FUN_00468530(param_1 + 0x78 + (ulonglong)param_2 * 0x18,local_c,0xfffffffffffffffc);
      }
      goto LAB_00a5c5b8;
    }
    if (uVar3 - 0x1e == 0x10) {
      iVar2 = FUN_00416db0(local_res18[0],L"visible");
      if (iVar2 == 0) {
        FUN_00468530(param_1 + 0x4c8,2,1);
      }
      else {
        iVar2 = FUN_00416db0(local_res18[0],L"hidden");
        if (iVar2 == 0) {
          FUN_00468530(param_1 + 0x4c8,1,1);
        }
      }
      goto LAB_00a5c5b8;
    }
  }
  else {
    if (uVar3 == 0x3c) {
      iVar2 = FUN_00416db0(local_res18[0],L"break-word");
      if (iVar2 == 0) {
        FUN_00468a10(param_1 + 0x618,local_res18[0]);
      }
      else {
        FUN_00468a10(param_1 + 0x618,L"normal");
      }
      goto LAB_00a5c5b8;
    }
    if (uVar3 == 0x3d) {
      iVar2 = FUN_00416db0(local_res18[0],L"small-caps");
      if (iVar2 == 0) {
        FUN_00468a10(param_1 + 0x630,local_res18[0]);
      }
      else {
        iVar2 = FUN_00416db0(local_res18[0],L"normal");
        if (iVar2 == 0) {
          FUN_00468a10(param_1 + 0x630,L"normal");
        }
      }
      goto LAB_00a5c5b8;
    }
    if (uVar3 == 0x42) {
      cVar1 = FUN_00a2bdd0(local_res18[0],&local_d);
      if (cVar1 != '\0') {
        FUN_00468a10(param_1 + 0x6a8,local_res18[0]);
      }
      goto LAB_00a5c5b8;
    }
  }
  FUN_00468a10(param_1 + 0x78 + (ulonglong)param_2 * 0x18,local_res18[0]);
LAB_00a5c5b8:
  *(undefined1 *)(param_1 + 0x703 + (ulonglong)param_2) = param_4;
  FUN_00414480(local_20);
  FUN_00414480(local_res18);
  return;
}

