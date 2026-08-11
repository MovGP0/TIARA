/* Ghidra address: 005935d0 */
/* Ghidra symbol: FUN_005935d0 */


undefined8 FUN_005935d0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_0058f600(param_1);
  if (cVar1 == '\x01') {
    uVar2 = FUN_00592ba0(&PTR_FUN_01de2188,param_1,param_2);
  }
  else if (cVar1 == '\x02') {
    uVar2 = FUN_005933f0(param_1,param_2);
  }
  else if (cVar1 == '\x03') {
    uVar2 = FUN_00592ba0(&PTR_FUN_01de1f98,param_1,param_2);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

