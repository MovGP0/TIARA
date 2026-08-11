/* Ghidra address: 01c38160 */
/* Ghidra symbol: FUN_01c38160 */


void FUN_01c38160(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530);
  if (lVar4 != *(longlong *)(param_1 + 0x6c0)) {
    if (lVar4 == *(longlong *)(param_1 + 0x6c8)) {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x260))
                        (*(longlong **)(param_1 + 0x7a8));
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))
                (*(longlong **)(param_1 + 0x6d8),
                 CONCAT71((int7)((ulonglong)uVar5 >> 8),(uint)uVar5 < 0x80000000) & 0xffffffff);
    }
    else if (lVar4 == *(longlong *)(param_1 + 0x6f0)) {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))
                (*(longlong **)(param_1 + 0x6d8),
                 CONCAT71((int7)((ulonglong)uVar5 >> 8),(int)uVar5 != -1) & 0xffffffff);
    }
    else if (lVar4 == *(longlong *)(param_1 + 0x6f8)) {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
      iVar6 = 0;
      while( true ) {
        iVar3 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900));
        if (iVar3 <= iVar6) break;
        lVar4 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),iVar6);
        if (*(longlong *)(lVar4 + 8) == 0) break;
        iVar6 = iVar6 + 1;
      }
      uVar5 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900));
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))
                (*(longlong **)(param_1 + 0x6d8),
                 CONCAT71((int7)((ulonglong)uVar5 >> 8),iVar6 == (int)uVar5) & 0xffffffff);
    }
    else if (lVar4 == *(longlong *)(param_1 + 0x8a8)) {
      (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),1);
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
    }
    else if (lVar4 == *(longlong *)(param_1 + 0x830)) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d0),0);
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),1);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),L"Insert");
      *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4f0) = 6;
      FUN_0064de00(*(undefined8 *)(param_1 + 0x870),L"Finish");
      *(undefined4 *)(*(longlong *)(param_1 + 0x870) + 0x4f0) = 1;
    }
    goto code_r0x01c384ab;
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x128))(*(longlong **)(param_1 + 0x6d0),0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),local_20);
  if (local_20[0] == 0) {
LAB_01c3823d:
    uVar2 = 0;
  }
  else {
    lVar4 = FUN_01c3c010(param_1);
    if ((char)lVar4 != '\x01') {
      lVar4 = FUN_01c3c010(param_1);
      if ((char)lVar4 != '\x02') {
        cVar1 = FUN_01c3c010(param_1);
        if (cVar1 == '\x03') {
          FUN_01c3c530(param_1,&local_28);
          lVar4 = FUN_00440a20(local_28,1);
          if ((char)lVar4 != '\0') goto LAB_01c38241;
        }
        cVar1 = FUN_01c3c010(param_1);
        if ((cVar1 != '\x04') ||
           (lVar4 = *(longlong *)(param_1 + 0x7f0), *(char *)(lVar4 + 0xa9) == '\0'))
        goto LAB_01c3823d;
      }
    }
LAB_01c38241:
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x128))(*(longlong **)(param_1 + 0x6d8),uVar2);
code_r0x01c384ab:
  FUN_00414480(&local_28);
  FUN_00414480(local_20);
  return;
}

