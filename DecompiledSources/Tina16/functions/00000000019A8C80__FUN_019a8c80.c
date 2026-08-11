/* Ghidra address: 019a8c80 */
/* Ghidra symbol: FUN_019a8c80 */


undefined1 FUN_019a8c80(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 local_39;
  undefined1 local_34 [4];
  undefined8 local_30;
  
  local_30 = 0;
  local_39 = 0;
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_2,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if ((cVar1 == '\x04') || (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x05')) {
        FUN_017ff4f0(plVar3,&local_30);
        cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x140))
                          (*(longlong **)(param_1 + 0x430),local_30,local_34);
        if (cVar1 != '\0') {
          FUN_017ff310(plVar3);
          FUN_017ff4f0(plVar3,&local_30);
          local_39 = 1;
        }
LAB_019a8df5:
        (**(code **)(**(longlong **)(param_1 + 0x430) + 0x78))
                  (*(longlong **)(param_1 + 0x430),local_30);
        cVar1 = FUN_0198a580(plVar3);
        if ((((cVar1 == '\x04') && (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x39))
            && ((char)plVar3[0x34] == '\x01')) && (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          local_39 = FUN_019a8c80(param_1,*(undefined8 *)(plVar3[0x35] + 8));
        }
      }
      else {
        cVar1 = FUN_0198a580(plVar3);
        if (cVar1 == '\a') {
          FUN_010b96c0(plVar3,&local_30);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x140))
                            (*(longlong **)(param_1 + 0x430),local_30,local_34);
          if (cVar1 != '\0') {
            FUN_010b9520(plVar3);
            FUN_010b96c0(plVar3,&local_30);
            local_39 = 1;
          }
          goto LAB_019a8df5;
        }
        cVar1 = FUN_0198a580(plVar3);
        if (cVar1 == '\b') {
          FUN_0149eec0(plVar3,&local_30);
          cVar1 = (**(code **)(**(longlong **)(param_1 + 0x430) + 0x140))
                            (*(longlong **)(param_1 + 0x430),local_30,local_34);
          if (cVar1 != '\0') {
            FUN_0149ed30(plVar3);
            FUN_0149eec0(plVar3,&local_30);
            local_39 = 1;
          }
          goto LAB_019a8df5;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_30);
  return local_39;
}

