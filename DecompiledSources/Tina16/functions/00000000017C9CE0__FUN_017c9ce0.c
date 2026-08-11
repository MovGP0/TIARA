/* Ghidra address: 017c9ce0 */
/* Ghidra symbol: FUN_017c9ce0 */


undefined8 FUN_017c9ce0(undefined8 param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_30;
  
  local_30 = 0;
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01995600(param_1,0,0);
  if ((cVar1 != '\0') && (plVar5 = (longlong *)FUN_01995660(param_1,0,0), plVar5 != (longlong *)0x0)
     ) {
    sVar2 = FUN_01d03160(plVar5);
    while( true ) {
      (**(code **)(*plVar5 + 0x288))(plVar5,&local_30);
      if ((sVar2 == 0x40b) &&
         (iVar3 = FUN_004170c0(*(undefined8 *)PTR_PTR_02002be0,local_30,1), 0 < iVar3)) {
        (**(code **)(*plVar5 + 0x210))(plVar5,0);
        FUN_004ae7e0(uVar4,plVar5);
      }
      FUN_01995800(param_1,0,0);
      plVar5 = (longlong *)FUN_01995660(param_1,0);
      if (plVar5 == (longlong *)0x0) break;
      sVar2 = FUN_01d03160(plVar5);
    }
  }
  FUN_00414480(&local_30);
  return uVar4;
}

