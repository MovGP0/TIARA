/* Ghidra address: 019ea6d0 */
/* Ghidra symbol: FUN_019ea6d0 */


void FUN_019ea6d0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 local_a90 [2576];
  undefined1 local_80 [72];
  double local_38;
  undefined1 local_30;
  
  local_30 = 0;
  cVar1 = FUN_016eacf0(param_1,2,2);
  local_38 = (double)FUN_016eb0a0(param_1,3);
  local_38 = local_38 + 273.15;
  if (cVar1 == '\0') {
    dVar3 = (double)FUN_016ed770(param_2);
    local_38 = local_38 + dVar3;
  }
  uVar2 = 0;
  FUN_016ebb00(param_1,1,local_80,0x48);
  FUN_019e84b0(param_1,param_2,1,CONCAT11(uVar2,2),3,&local_38,local_80,local_a90);
  FUN_016ea050(param_1,local_a90,0xa10);
  FUN_016e9f40(param_1,FUN_019ea670);
  FUN_016e9f60(param_1,FUN_019e7930);
  FUN_016e9fd0(param_1,FUN_019e7980);
  return;
}

