/* Ghidra address: 00a65600 */
/* Ghidra symbol: FUN_00a65600 */


void FUN_00a65600(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58 [4];
  int local_54;
  longlong local_50 [7];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00417600(local_50,&DAT_00401390,7);
  FUN_00417600(&local_70,&DAT_00401390,3);
  FUN_00414b50(&local_70,L"medium");
  FUN_00414b50(&local_68,L"none");
  FUN_00414480(&local_60);
  FUN_00a64550(local_res18,local_50,6,&local_54);
  if (-1 < local_54 + -1) {
    plVar3 = local_50;
    iVar4 = local_54;
    do {
      cVar1 = FUN_00a602d0(*plVar3,1,local_58);
      if (cVar1 != '\0') {
        FUN_00414b50(&local_60,*plVar3);
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_00417840(local_50,&DAT_00401390,7);
  FUN_00a640f0(local_res18[0],uVar2,6,&local_54);
  if (-1 < local_54 + -1) {
    plVar3 = local_50;
    iVar4 = local_54;
    do {
      cVar1 = FUN_00a602d0(*plVar3,1,local_58);
      if (cVar1 == '\0') {
        cVar1 = FUN_00a65300(auStack_98,*plVar3);
        if (cVar1 == '\0') {
          FUN_00414b50(&local_70,*plVar3);
        }
        else {
          FUN_00414b50(&local_68,*plVar3);
        }
      }
      else {
        FUN_00414b50(&local_60,*plVar3);
      }
      plVar3 = plVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_60 != 0) {
    FUN_00a65340(auStack_98,L"-color",local_60);
  }
  FUN_00a65340(auStack_98,L"-width",local_70);
  FUN_00a65340(auStack_98,L"-style",local_68);
  FUN_00417840(&local_70,&DAT_00401390,3);
  FUN_00417840(local_50,&DAT_00401390,7);
  FUN_00414560(&local_res10,2);
  return;
}

