/* Ghidra address: 01af25d0 */
/* Ghidra symbol: FUN_01af25d0 */


void FUN_01af25d0(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined8 in_RAX;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    if (param_2 < 5) {
      if (param_2 == 4) {
        in_RAX = *(undefined8 *)(lVar1 + 0x720);
      }
      else if (param_2 == 1) {
        in_RAX = *(undefined8 *)(lVar1 + 0x708);
      }
      else if (param_2 == 2) {
        in_RAX = *(undefined8 *)(lVar1 + 0x710);
      }
      else if (param_2 == 3) {
        in_RAX = *(undefined8 *)(lVar1 + 0x718);
      }
    }
    else if (param_2 == 5) {
      in_RAX = *(undefined8 *)(lVar1 + 0x728);
    }
    else if (param_2 == 6) {
      in_RAX = *(undefined8 *)(lVar1 + 0x730);
    }
    FUN_01af0ad0(lVar1,in_RAX);
  }
  return;
}

