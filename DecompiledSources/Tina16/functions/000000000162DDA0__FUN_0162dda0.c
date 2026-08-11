/* Ghidra address: 0162dda0 */
/* Ghidra symbol: FUN_0162dda0 */


undefined1
FUN_0162dda0(longlong param_1,int *param_2,undefined8 *param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_39;
  char local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_39 = 0;
  *param_2 = -1;
  *param_3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_5 + 0x13968) + 0x10);
  lVar1 = *(longlong *)(param_1 + 8);
  FUN_0162ac10(param_1);
  iVar3 = FUN_004170c0(L"builtin_",*(undefined8 *)(param_4 + 0x658),1);
  if (iVar3 < 1) {
    local_20 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) + 8);
    local_28 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) + 8);
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '1') && (iVar4 == 1)) {
      cVar2 = FUN_01626480(lVar1);
      if (cVar2 != '\0') {
        cVar2 = FUN_016264d0(lVar1,param_3,&local_20,&local_28,&DAT_0162e1ac);
        if (cVar2 != '\0') {
          local_39 = 1;
          *param_2 = 9;
          FUN_016139c0(0,*param_3,*(undefined8 *)(param_1 + 0x128));
          goto LAB_0162e0ff;
        }
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '1') && (iVar4 == 1)) {
      cVar2 = FUN_016264b0(lVar1);
      if (cVar2 != '\0') {
        cVar2 = FUN_016264d0(*(undefined8 *)(lVar1 + 8),param_3,&local_20,&local_28,&DAT_0162e1ac);
        if (cVar2 != '\0') {
          local_39 = 1;
          *param_2 = 0xb;
          FUN_016139c0(0,*param_3,*(undefined8 *)(param_1 + 0x128));
          goto LAB_0162e0ff;
        }
      }
    }
    if ((*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '3') && (iVar4 == 1)) {
      cVar2 = FUN_016264b0(lVar1);
      if (cVar2 != '\0') {
        cVar2 = FUN_016264d0(*(undefined8 *)(lVar1 + 8),param_3,&local_20,&local_28,&LAB_0162e1c0);
        if (cVar2 != '\0') {
          local_39 = 1;
          *param_2 = 10;
          FUN_016139c0(0,*param_3,*(undefined8 *)(param_1 + 0x128));
          goto LAB_0162e0ff;
        }
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '3') {
      cVar2 = FUN_01626370(lVar1,param_3);
      if (cVar2 != '\0') {
        local_39 = 1;
        *param_2 = 0xd;
        goto LAB_0162e0ff;
      }
    }
    if (*(char *)(*(longlong *)(param_1 + 0x10) + 8) == '1') {
      cVar2 = FUN_01626370(lVar1,param_3);
      if (cVar2 != '\0') {
        local_39 = 1;
        *param_2 = 0xe;
      }
    }
    goto LAB_0162e0ff;
  }
  iVar4 = FUN_016278e0(*(undefined8 *)(param_4 + 0x658),param_1 + 0x24,param_5);
  *param_2 = iVar4;
  if (*param_2 == 0x10) {
    FUN_0162d8a0(param_1,param_4);
  }
  else if (((*param_2 == 9) || (*param_2 == 0xb)) || (*param_2 == 0xe)) {
    uVar5 = FUN_0162dbe0(param_1,0,param_4,&local_31);
    *param_3 = uVar5;
    if (local_31 != '\0') {
      FUN_016139c0(0,*param_3,*(undefined8 *)(param_1 + 0x128));
    }
  }
  else {
    cVar2 = FUN_01d3d530((short)*param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_01d3d590((short)*param_2);
      if (((cVar2 == '\0') && (*param_2 != 0x45d)) &&
         ((*param_2 != 10 && ((*param_2 != 0x17 && (*param_2 != 0x20)))))) {
        FUN_01613110(L"THDLSession.CheckBuiltInComp");
        goto LAB_0162df24;
      }
    }
    FUN_0162dce0(param_1,param_4);
  }
LAB_0162df24:
  local_39 = 1;
LAB_0162e0ff:
  FUN_00414480(&local_30);
  return local_39;
}

