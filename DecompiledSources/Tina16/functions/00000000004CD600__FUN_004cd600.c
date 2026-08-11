/* Ghidra address: 004cd600 */
/* Ghidra symbol: FUN_004cd600 */


void FUN_004cd600(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 in_XMM1_Qa;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar8 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x1e0) + 0x56);
  if (uVar1 < 8) {
    bVar5 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << ((byte)uVar1 & 0x1f) & 0x24U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_004cd4e0(auStack_58,&local_10);
    FUN_004c81b0(*(undefined8 *)(param_1 + 0x1d8),local_10);
    goto code_r0x004cdb43;
  }
  if (uVar1 < 0x29) {
    if (uVar1 == 0x28) {
      FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
      FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),1);
      while (*(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56) != 0x29) {
        FUN_004cd600(param_1);
      }
      FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0);
    }
    else if (uVar1 == 1) {
      FUN_004c9b40(*(undefined8 *)(param_1 + 0x1e0),&local_18);
      FUN_004c55e0(*(undefined8 *)(param_1 + 0x1d8),local_18);
    }
    else if (uVar1 == 3) {
      uVar7 = FUN_004c9920(*(undefined8 *)(param_1 + 0x1e0));
      FUN_004c5830(*(undefined8 *)(param_1 + 0x1d8),uVar7);
    }
    else {
      if (uVar1 != 4) goto LAB_004cdb1b;
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x1e0) + 0x58);
      if (uVar1 < 100) {
        if ((uVar1 == 99) || (uVar1 == 0x43)) {
          dVar6 = (double)FUN_004c9880(*(undefined8 *)(param_1 + 0x1e0));
          FUN_004c5560(*(undefined8 *)(param_1 + 0x1d8),(longlong)ROUND((dVar6 / 10000.0) * 10000.0)
                      );
        }
        else {
          if (uVar1 == 0x44) goto LAB_004cd7fa;
          if (uVar1 != 0x53) goto LAB_004cd823;
LAB_004cd796:
          dVar6 = (double)FUN_004c9880(*(undefined8 *)(param_1 + 0x1e0));
          FUN_004c54e0(*(undefined8 *)(param_1 + 0x1d8),CONCAT44(uVar8,(float)dVar6));
        }
      }
      else if (uVar1 == 100) {
LAB_004cd7fa:
        uVar7 = FUN_004c9880(*(undefined8 *)(param_1 + 0x1e0));
        FUN_004c55a0(*(undefined8 *)(param_1 + 0x1d8),uVar7);
      }
      else {
        if (uVar1 == 0x73) goto LAB_004cd796;
LAB_004cd823:
        uVar7 = FUN_004c9880(*(undefined8 *)(param_1 + 0x1e0));
        FUN_004c5490(*(undefined8 *)(param_1 + 0x1d8),uVar7);
      }
    }
  }
  else if (uVar1 == 0x3c) {
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0xe);
    while (*(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56) != 0x3e) {
      FUN_004c8f60(*(undefined8 *)(param_1 + 0x1e0),L"item");
      FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
      iVar4 = FUN_004cd2f0(param_1);
      if (iVar4 != -1) {
        FUN_004c57a0(*(undefined8 *)(param_1 + 0x1d8),iVar4);
      }
      FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),1);
      while (cVar2 = FUN_004c9a90(*(undefined8 *)(param_1 + 0x1e0),&LAB_004cdbb4), cVar2 == '\0') {
        FUN_004cdbc0(param_1);
      }
      FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0);
      FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    }
    FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0);
  }
  else if (uVar1 == 0x5b) {
    FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
    FUN_004c8510(*(undefined8 *)(param_1 + 0x1d8),0xb);
    if (*(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56) != 0x5d) {
      do {
        FUN_004c9990(*(undefined8 *)(param_1 + 0x1e0),&local_20);
        FUN_00414b50(param_1 + 0x1e8,local_20);
        sVar3 = *(short *)(*(longlong *)(param_1 + 0x1e0) + 0x56);
        if (sVar3 == 2) {
LAB_004cd8d7:
          FUN_0043f750(&local_28,**(undefined2 **)(param_1 + 0x1e8));
          FUN_00416ba0(param_1 + 0x1e8,&DAT_004cdb8c,local_28);
        }
        else if (sVar3 != 3) {
          if (sVar3 == 5) goto LAB_004cd8d7;
          FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),1);
        }
        FUN_004c8440(*(undefined8 *)(param_1 + 0x1d8),*(undefined8 *)(param_1 + 0x1e8));
        sVar3 = FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
        if (sVar3 == 0x5d) break;
        FUN_004c8ed0(*(undefined8 *)(param_1 + 0x1e0),0x2c);
        FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
      } while( true );
    }
    FUN_004c8440(*(undefined8 *)(param_1 + 0x1d8),0);
  }
  else if (uVar1 == 0x7b) {
    local_30 = *(undefined8 *)(param_1 + 0x1e0);
    local_38 = FUN_004c90f0;
    FUN_004c39b0(*(undefined8 *)(param_1 + 0x1d8),&local_38);
  }
  else {
LAB_004cdb1b:
    FUN_004c8dd0(*(undefined8 *)(param_1 + 0x1e0),PTR_PTR_02003d48);
  }
  FUN_004c9210(*(undefined8 *)(param_1 + 0x1e0));
code_r0x004cdb43:
  FUN_00414560(&local_28,4);
  return;
}

