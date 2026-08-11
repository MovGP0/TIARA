/* Ghidra address: 00896a20 */
/* Ghidra symbol: FUN_00896a20 */


undefined4
FUN_00896a20(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined1 local_640 [520];
  undefined1 local_438 [520];
  undefined1 local_230 [520];
  
  local_660 = param_1;
  FUN_008969f0(auStack_698,param_2,local_230,&local_648);
  FUN_008969f0(auStack_698,param_3,local_438,&local_650);
  FUN_008969f0(auStack_698,param_4,local_640,&local_658);
  local_678 = param_5;
  uVar1 = FUN_008968f0(local_660,local_648,local_650,local_658);
  if (param_2 != 0) {
    FUN_00896af0(param_2,local_230);
  }
  if (param_3 != 0) {
    FUN_00896af0(param_3,local_438);
  }
  if (param_4 != 0) {
    FUN_00896af0(param_4,local_640);
  }
  return uVar1;
}

