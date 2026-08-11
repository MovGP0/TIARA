/* Ghidra address: 0107a440 */
/* Ghidra symbol: FUN_0107a440 */


void FUN_0107a440(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_20 [8];
  
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_0043e1a0(local_30,local_res10);
  FUN_00414b50(&local_res10,local_30[0]);
  FUN_00441920(&local_38,local_res10);
  cVar2 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_38,local_20,0);
  if (cVar2 == '\0') {
    cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    if (cVar2 == '\0') {
      uVar5 = 2;
    }
    else {
      uVar5 = 1;
    }
    FUN_010b2a40(*(undefined8 *)(param_1 + 0xac8),local_res10,local_res18);
    FUN_0043e1a0(&local_58,local_res10);
    FUN_00441920(&local_50,local_58);
    FUN_010b04f0(*(undefined8 *)(param_1 + 0xac8),local_50,1);
    FUN_0107a0c0(param_1);
    if (param_4 != '\0') {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x550);
      iVar3 = FUN_006decb0(uVar1);
      lVar6 = FUN_006df500(uVar1,iVar3 + -1);
      FUN_006dd110(lVar6,1);
      FUN_010792a0(param_1,lVar6);
      FUN_01085110(param_1,*(undefined8 *)(lVar6 + 0x10),0xffffffff);
    }
    cVar2 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    if (cVar2 != '\0') {
      uVar4 = FUN_0108c4a0(param_1,uVar5);
      *(undefined4 *)(param_1 + 0xaa0) = uVar4;
      FUN_0108c0f0();
    }
  }
  else {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_48,PTR_PTR_02001928);
    FUN_00b8e650(uVar5,&local_40,L"HDLStrings.Msg_NameAlreadyExists",local_48);
    FUN_016fd940(local_40);
  }
  FUN_00414560(&local_58,6);
  FUN_00414560(&local_res10,2);
  return;
}

