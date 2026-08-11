/* Ghidra address: 014a4e40 */
/* Ghidra symbol: FUN_014a4e40 */


void FUN_014a4e40(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined8 local_30 [2];
  undefined4 local_1c [3];
  
  local_30[0] = 0;
  bVar1 = *(byte *)(*param_1 + 0x78);
  if (bVar1 < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)*param_1 >> 8),1) << (bVar1 & 0x1f) & 0x39U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    plVar2 = *(longlong **)(*(longlong *)(*param_1 + 0x48) + 0x238);
    (**(code **)(*plVar2 + 0x38))(plVar2,local_30);
    puVar5 = (undefined8 *)FUN_004ba3c0(&PTR_FUN_0047d288,1,local_30[0]);
    iVar3 = (**(code **)*puVar5)(puVar5);
    FUN_01d31180(*param_1,0xf404,0x10,iVar3 + 4);
    local_1c[0] = (**(code **)*puVar5)(puVar5);
    FUN_01d311c0(*param_1,local_1c,4);
    uVar4 = (**(code **)*puVar5)(puVar5);
    FUN_01d326d0(*param_1,puVar5,uVar4);
    FUN_00410f20(puVar5);
    iVar3 = FUN_01d31a40(*param_1);
    if (iVar3 != 0) {
      FUN_00b047e0(0xfffffff3);
    }
  }
  FUN_00414480(local_30);
  return;
}

