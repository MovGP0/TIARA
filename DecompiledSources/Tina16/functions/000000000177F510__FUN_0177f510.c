/* Ghidra address: 0177f510 */
/* Ghidra symbol: FUN_0177f510 */


void FUN_0177f510(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  *(longlong *)(param_1 + 0xc88) = param_3;
  FUN_01794150(param_3,*(undefined8 *)(param_3 + 0xd18));
  FUN_0040cf10(param_1 + 0x10,local_res10[0],0);
  FUN_00409900();
  FUN_0040c9e0(param_1 + 0x10);
  FUN_00409900();
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  while( true ) {
    cVar1 = FUN_0040d1c0(param_1 + 0x10);
    FUN_00409900();
    if (cVar1 != '\0') break;
    if ((int)*(short *)(param_1 + 8) % 16000 == 0) {
      uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x628),uVar3);
      *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
    }
    FUN_0040e200(param_1 + 0x10,local_20);
    FUN_0040e480(param_1 + 0x10);
    FUN_00409900();
    plVar4 = (longlong *)
             FUN_004aeac0(*(undefined8 *)(param_1 + 0x628),*(short *)(param_1 + 0xc) + -1);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_20[0]);
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + 1;
  }
  FUN_0040d150(param_1 + 0x10);
  FUN_00409900();
  FUN_004414c0(local_30,local_res10[0],L".MP_");
  FUN_00414ad0(param_1 + 0x600,local_30[0]);
  FUN_0040cf10(param_1 + 0x308,*(undefined8 *)(param_1 + 0x600),0);
  FUN_00409900();
  FUN_0040ca00(param_1 + 0x308);
  FUN_00409900();
  FUN_0040d150(param_1 + 0x308);
  FUN_00409900();
  FUN_00441a10(&local_40,local_res10[0]);
  FUN_0043e130(&local_38,local_40);
  FUN_00414ad0(param_1 + 0x608,local_38);
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x608),L".SRC");
  *(bool *)(param_1 + 0x620) = iVar2 == 0;
  FUN_0177f0d0(&local_48,local_res10[0]);
  FUN_00414ad0(param_1 + 0x610,local_48);
  FUN_0177f840(param_1);
  FUN_017807c0(param_1);
  FUN_017808b0(param_1);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return;
}

