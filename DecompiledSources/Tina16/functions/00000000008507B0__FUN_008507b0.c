/* Ghidra address: 008507b0 */
/* Ghidra symbol: FUN_008507b0 */


void FUN_008507b0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 local_20;
  
  local_20 = 0;
  if (((char)param_1[0xa6] == '\0') || (*(longlong *)(param_1[0xa1] + 0x208) != 0)) {
    FUN_0083ddd0(param_1);
  }
  else {
    if ((char)param_1[0xa6] == '\x02') {
      lVar4 = FUN_0084f210(param_1);
      if (param_1[0xa5] == lVar4) {
        pcVar5 = (code *)FUN_00411550(param_1,0xffaa);
        (*pcVar5)(param_1);
        lVar4 = FUN_0084f210(param_1);
        iVar1 = (**(code **)(**(longlong **)(lVar4 + 0x4a0) + 0x28))(*(longlong **)(lVar4 + 0x4a0));
        if (0 < iVar1) {
          plVar6 = (longlong *)FUN_0084f210(param_1);
          iVar1 = (**(code **)(*plVar6 + 0x260))(plVar6);
          iVar1 = iVar1 + 1;
          lVar4 = FUN_0084f210(param_1);
          iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x4a0) + 0x28))
                            (*(longlong **)(lVar4 + 0x4a0));
          if (iVar2 <= iVar1) {
            iVar1 = 0;
          }
          plVar6 = (longlong *)FUN_0084f210(param_1);
          (**(code **)(*plVar6 + 0x268))(plVar6,iVar1);
          lVar4 = FUN_0084f210(param_1);
          plVar6 = (longlong *)FUN_0084f210(param_1);
          uVar3 = (**(code **)(*plVar6 + 0x260))(plVar6);
          (**(code **)(**(longlong **)(lVar4 + 0x4a0) + 0x18))
                    (*(longlong **)(lVar4 + 0x4a0),&local_20,uVar3);
          FUN_0064fca0(param_1,0xc,0,local_20);
          FUN_006806a0(param_1,1);
          lVar4 = param_1[0xa1];
          pcVar5 = (code *)FUN_00411550(lVar4,0xffa6);
          (*pcVar5)(lVar4,*(undefined4 *)(lVar4 + 0x4a8),*(undefined4 *)(lVar4 + 0x4ac),local_20);
          FUN_00680ad0(param_1);
        }
        goto code_r0x00850960;
      }
    }
    if ((char)param_1[0xa6] == '\x01') {
      (**(code **)(*param_1 + 0x2e8))(param_1);
    }
  }
code_r0x00850960:
  FUN_00414480(&local_20);
  return;
}

