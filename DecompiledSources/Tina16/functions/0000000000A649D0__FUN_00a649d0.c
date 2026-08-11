/* Ghidra address: 00a649d0 */
/* Ghidra symbol: FUN_00a649d0 */


void FUN_00a649d0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417600(&local_28,&DAT_00401390,2);
  uVar1 = FUN_00417840(&local_28,&DAT_00401390,2);
  FUN_00a640f0(local_res10[0],uVar1,1,&local_2c);
  if (local_2c == 1) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),L"thv-border-spacing-horz",local_28,
               *(undefined1 *)(param_1 + 0x58));
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),L"thv-border-spacing-vert",local_28,
               *(undefined1 *)(param_1 + 0x58));
  }
  else if (local_2c == 2) {
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),L"thv-border-spacing-horz",local_28,
               *(undefined1 *)(param_1 + 0x58));
    (**(code **)**(undefined8 **)(param_1 + 0x30))
              (*(undefined8 **)(param_1 + 0x30),L"thv-border-spacing-vert",local_20,
               *(undefined1 *)(param_1 + 0x58));
  }
  FUN_00417840(&local_28,&DAT_00401390,2);
  FUN_00414480(local_res10);
  return;
}

