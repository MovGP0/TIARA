/* Ghidra address: 019a08e0 */
/* Ghidra symbol: FUN_019a08e0 */


void FUN_019a08e0(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        cVar2 = FUN_01d3f230(plVar4);
        if ((cVar2 == '\0') || ((char)plVar4[0xac] != '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          FUN_019a08e0(*(undefined8 *)(plVar4[0x35] + 8),param_2,param_3);
        }
        if (bVar1) {
          FUN_0043fbc0(&local_48,plVar4,8);
          FUN_00416ba0(local_40,L"TCircuit.SetHDLCompiledData called, p: $",local_48);
          FUN_01602e30(local_40[0],1);
          lVar5 = FUN_004113f0(plVar4[0x35],&PTR_FUN_017649b8);
          FUN_01644e30(*(undefined8 *)(lVar5 + 0xd8),param_2);
          FUN_004ae7e0(*(undefined8 *)(param_3 + 0x100),*(undefined8 *)(lVar5 + 0xd8));
          *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0xd8) + 0x78) + 0x38) = param_3;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_48,2);
  return;
}

