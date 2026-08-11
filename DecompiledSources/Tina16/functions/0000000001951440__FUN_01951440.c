/* Ghidra address: 01951440 */
/* Ghidra symbol: FUN_01951440 */


void FUN_01951440(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  iVar2 = FUN_0043e420(param_2,param_1[2]);
  if (iVar2 != 0) {
    if (param_2 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x118))(param_1);
      if (lVar3 != 0) {
        plVar5 = (longlong *)0x0;
        plVar4 = (longlong *)FUN_01950760(param_1);
        iVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_2);
        if (iVar2 != -1) {
          plVar5 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4,iVar2);
        }
        if ((plVar5 != (longlong *)0x0) && (plVar5 != param_1)) {
          uVar6 = FUN_0180bfb0();
          FUN_01809b60(uVar6,&local_20,L"prDupl");
          uVar6 = FUN_0044d490(&PTR_FUN_01915530,1,local_20);
          FUN_004134c0(uVar6);
        }
        cVar1 = FUN_01953b80(param_1);
        if (cVar1 != '\0') {
          uVar6 = FUN_0180bfb0();
          FUN_01809b60(uVar6,&local_28,L"clCantRen");
          local_38 = param_1[2];
          local_30 = 0x11;
          uVar6 = FUN_0044d530(&PTR_FUN_004334c0,1,local_28,&local_38,0);
          FUN_004134c0(uVar6);
        }
        iVar2 = (**(code **)(*plVar4 + 0xb0))(plVar4,param_1[2]);
        if (iVar2 != -1) {
          (**(code **)(*plVar4 + 0x98))(plVar4,iVar2);
        }
        (**(code **)(*plVar4 + 0x80))(plVar4,param_2,param_1);
      }
    }
    FUN_004d3c50(param_1,param_2);
  }
  FUN_00414560(&local_28,2);
  return;
}

