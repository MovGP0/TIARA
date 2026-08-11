/* Ghidra address: 01d6c780 */
/* Ghidra symbol: FUN_01d6c780 */


void FUN_01d6c780(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  uVar2 = (undefined1)((ushort)param_3 >> 8);
  local_1a = 1;
  cVar1 = FUN_016e9de0(param_1,3);
  if (cVar1 == '\0') {
    local_19 = 0;
  }
  else {
    local_19 = 3;
  }
  FUN_016e9e20(param_1,2);
  FUN_016ec420(param_1,1,CONCAT11(uVar2,1),local_19,2,local_19,0);
  FUN_016ebe60(param_1,2,1,local_19,1);
  FUN_016ed320(param_1,2,0,*(undefined8 *)(param_2 + 0x430),0);
  FUN_016e9f40(param_1,FUN_01d6c650);
  local_1b = 1;
  FUN_016ea050(param_1,&local_1b,3);
  return;
}

