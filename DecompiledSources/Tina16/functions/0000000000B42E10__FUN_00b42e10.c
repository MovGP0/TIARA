/* Ghidra address: 00b42e10 */
/* Ghidra symbol: FUN_00b42e10 */


void FUN_00b42e10(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  byte local_c37f;
  ushort local_c37e;
  undefined4 local_c37c;
  undefined1 local_c378 [45912];
  undefined1 auStack_1020 [4096];
  ulonglong uVar5;
  
  uVar5 = 0xc78;
  do {
    uVar4 = uVar5 - 0x1000;
    auStack_1020[uVar5] = (char)uVar4;
    uVar5 = uVar4;
  } while (0xffffffffffff3c78 < uVar4);
  FUN_0040d200(local_c378,50000,0);
  FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),local_c378,10);
  uVar2 = FUN_00b414a0(local_c378);
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Unsupported image file format");
    FUN_004134c0(uVar6);
  }
  iVar3 = *(int *)(param_1 + 0x4c);
  if (iVar3 - 2U < 2) {
    **(undefined4 **)(param_1 + 0xa0) = 1;
    **(undefined4 **)(param_1 + 0xa8) = 1;
    while( true ) {
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
      lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      if (lVar8 <= lVar7) break;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                        (*(longlong **)(param_1 + 0x50),local_c378,50000);
      if (iVar3 != 0) {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,(longlong)iVar3);
      }
    }
  }
  else if (iVar3 == 5) {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,10);
    local_c37f = 0;
    bVar9 = 0;
    while( true ) {
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
      lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      bVar1 = local_c37f;
      if ((lVar8 <= lVar7) || ((bVar9 == 0xff && ((local_c37f & 0xf0) == 0xc0)))) break;
      FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37f,1);
      FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37f,1);
      bVar9 = bVar1;
    }
    lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
    lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
    if (lVar7 == lVar8) {
      uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid JPEG file format");
      FUN_004134c0(uVar6);
    }
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),local_c378,3);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,3);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37e,2);
    **(uint **)(param_1 + 0xa8) = (uint)(ushort)(local_c37e << 8 | local_c37e >> 8);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37e,2);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37e,2);
    **(uint **)(param_1 + 0xa0) = (uint)(ushort)(local_c37e << 8 | local_c37e >> 8);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37e,2);
    while( true ) {
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
      lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      if (lVar8 <= lVar7) break;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                        (*(longlong **)(param_1 + 0x50),local_c378,50000);
      if (iVar3 != 0) {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,(longlong)iVar3);
      }
    }
  }
  else if (iVar3 == 6) {
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,10);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),local_c378,8);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,8);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37e,2);
    **(uint **)(param_1 + 0xa0) = (uint)(ushort)(local_c37e << 8 | local_c37e >> 8);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37e,2);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),local_c378,2);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,2);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37e,2);
    **(uint **)(param_1 + 0xa8) = (uint)(ushort)(local_c37e << 8 | local_c37e >> 8);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37e,2);
    while( true ) {
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
      lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      if (lVar8 <= lVar7) break;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                        (*(longlong **)(param_1 + 0x50),local_c378,50000);
      if (iVar3 != 0) {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,(longlong)iVar3);
      }
    }
  }
  else if (iVar3 == 7) {
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),local_c378,4);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37c,4);
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37c,4);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37c,4);
    **(undefined4 **)(param_1 + 0xa0) = local_c37c;
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37c,4);
    FUN_004b84c0(*(undefined8 *)(param_1 + 0x50),&local_c37c,4);
    **(undefined4 **)(param_1 + 0xa8) = local_c37c;
    FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),&local_c37c,4);
    while( true ) {
      lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x50));
      lVar8 = (**(code **)**(undefined8 **)(param_1 + 0x50))(*(undefined8 **)(param_1 + 0x50));
      if (lVar8 <= lVar7) break;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
                        (*(longlong **)(param_1 + 0x50),local_c378,50000);
      if (iVar3 != 0) {
        FUN_004b89e0(*(undefined8 *)(param_1 + 0x58),local_c378,(longlong)iVar3);
      }
    }
  }
  return;
}

