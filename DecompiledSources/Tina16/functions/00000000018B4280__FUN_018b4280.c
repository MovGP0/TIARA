/* Ghidra address: 018b4280 */
/* Ghidra symbol: FUN_018b4280 */


void FUN_018b4280(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x798) + 0x260))(*(longlong **)(param_1 + 0x798));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    uVar6 = FUN_0188d920();
    uVar6 = FUN_0188d190(uVar6);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x798),&local_20);
    iVar2 = FUN_0188b960(uVar6,local_20);
  }
  uVar6 = FUN_0188d920();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708));
  FUN_0188d0f0(uVar6,uVar3);
  uVar6 = FUN_0188d920();
  lVar7 = FUN_0188d190(uVar6);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),*(undefined8 *)(lVar7 + 0xb0));
  uVar6 = FUN_0188d920();
  lVar7 = FUN_0188d190(uVar6);
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x2f0))
            (*(longlong **)(param_1 + 0x798),*(undefined8 *)(lVar7 + 0x70));
  uVar6 = FUN_0188d920();
  uVar6 = FUN_0188d190(uVar6);
  uVar3 = FUN_0188b8b0(uVar6,0x100);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 0x98))(plVar1,uVar3);
  uVar6 = FUN_0180bfb0();
  FUN_01809b60(uVar6,&local_28,L"pgDefault");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x798) + 0x4f0);
  (**(code **)(*plVar1 + 200))(plVar1,0,local_28);
  if (iVar2 != -1) {
    uVar6 = FUN_0188d920();
    uVar6 = FUN_0188d190(uVar6);
    iVar4 = FUN_0188b8b0(uVar6,iVar2);
    if (iVar4 != -1) {
      uVar6 = FUN_0188d920();
      uVar6 = FUN_0188d190(uVar6);
      iVar4 = FUN_0188b8b0(uVar6,0x100);
      uVar6 = FUN_0188d920();
      uVar6 = FUN_0188d190(uVar6);
      iVar5 = FUN_0188b8b0(uVar6,iVar2);
      if (iVar4 < iVar5) {
        uVar6 = FUN_0188d920();
        uVar6 = FUN_0188d190(uVar6);
        uVar3 = FUN_0188b8b0(uVar6,iVar2);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
                  (*(longlong **)(param_1 + 0x798),uVar3);
      }
      else {
        uVar6 = FUN_0188d920();
        uVar6 = FUN_0188d190(uVar6);
        iVar2 = FUN_0188b8b0(uVar6,iVar2);
        (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))
                  (*(longlong **)(param_1 + 0x798),iVar2 + 1);
      }
      goto code_r0x018b44cc;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x798) + 0x268))(*(longlong **)(param_1 + 0x798),0);
code_r0x018b44cc:
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

